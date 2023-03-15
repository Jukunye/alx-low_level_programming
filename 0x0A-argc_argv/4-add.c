#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i, length, sum, j;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;

		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			length = strlen(ptr);

			for (j = 0; j < length; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
