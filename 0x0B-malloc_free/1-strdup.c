#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function returns a pointer to a new string 
 *          which is a duplicate of string str.
 * @str: string given as a parameter.
 * 
 * Return: on success return pointer to the duplicate string
 *         otherwise return NULL.
*/
char *_strdup(char *str)
{
    int len = 0, i = 0;
    char *p;

    if (str == NULL)
        return (NULL);

    while (str[len])
        len++;

    p = malloc((len * sizeof(char)) + 1);

    if (p == NULL)
        return(NULL);

    while ((p[len]  = str[len]) != '\0')
        i++;
    
    return(p);

}