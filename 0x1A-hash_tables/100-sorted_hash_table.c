#include "hash_tables.h"

int shash_table_set(shash_table_t *ht, const char *key, const char *value);

/**
 * shash_table_create - creates a sorted hash table
 * @size: is the size of the array
 *
 * Return: a pointer to the newly created hash table, otherwise (NULL)
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *current, *new_node, *tmp;
	char *new_value;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);

	/* Allocate memory for a copy of the value. */
	new_value = strdup(value);
	if (new_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	/* Check if the key already exists in the hash table. */
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = new_value;
			return (1);
		}
		current = current->next;
	}

	/* Key does not exist, create a new node. */
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
	{
		free(new_value);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_value);
		free(new_node);
		return (0);
	}
	new_node->value = new_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	/* Update the sorted linked list. */
	if (ht->shead == NULL || strcmp(ht->shead->key, key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		if (ht->shead != NULL)
		{
			ht->shead->sprev = new_node;
		}
		ht->shead = new_node;
		if (ht->stail == NULL)
		{
			ht->stail = new_node;
		}
	}
	else
	{
		/* Insert in the middle or at the end. */
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
		{
			tmp = tmp->snext;
		}
		new_node->sprev = tmp;
		new_node->snext = tmp->snext;
		if (tmp->snext == NULL)
		{
			ht->stail = new_node;
		}
		else
		{
			tmp->snext->sprev = new_node;
		}
		tmp->snext = new_node;
	}

	return (1);  /* Insertion successful.*/
}


/**
 * shash_table_get - retrieves a value associated with a key
 *
 * @ht: pointer to the shash table
 * @key: key of the shash
 * Return: value of the shash.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints the hash table
 * @ht: is the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *temp;
	char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", sep, temp->key, temp->value);
			sep = ", ";
			temp = temp->snext;
		}
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints the keys and values of the shash table
 * in reverse
 *
 * @ht: pointer to the shash table
 * Return: no return
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";

	tmp = ht->stail;

	while (tmp != NULL)
	{
		printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
		sep = ", ";
		tmp = tmp->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: is the sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp;
	unsigned long int i;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			temp = ht->array[i];
			ht->array[i] = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}

