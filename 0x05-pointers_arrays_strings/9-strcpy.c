#include "main.h"

/**
 * _strcpy - has two arguments
 * @dest: first argument
 * @src: second argument
 * Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < src[i]; i++)
		dest[i] = '\0';
	return (dest);
}
