#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints its own opcodes
 * @argc: count of arguments
 * @argv: vector arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *str;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	str = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", str[i]);
			break;
		}
		printf("%02hhx ", str[i]);
	}
	return (0);
}
