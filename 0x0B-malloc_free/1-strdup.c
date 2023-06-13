#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - newly allocate copy of the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, length;

	i = 0;
	length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	dup = malloc(sizeof(char) * (length + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != '\0')
		i++;

	return (dup);
}
