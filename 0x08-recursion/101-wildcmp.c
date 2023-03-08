#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string, which may contain the special character *
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
		return (wildcmp(s1, s2 + 1));

		if (!*s1)
		return (wildcmp(s1, s2 + 1));

		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	if (*s1 == *s2)
	{
		if (!*s1)
		return (1);

		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}

