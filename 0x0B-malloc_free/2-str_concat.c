#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: source string
 * @s2: destination string
 * 
 * Return: pointer to a newly allocated space in memory
 *         otherwise NULL.
*/
char *str_concat(char *s1, char *s2)
{
    char *p;
    int l1 = 0, l2 =0, i, j;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /*length of s1 and s2*/
    while (s1[l1] != '\0')
        l1++;
    while (s2[l2] != '\0')
        l2++;
    
    p = malloc((l1 + l2 + 1) * sizeof(char));

    if (p == NULL)
        return (NULL);
    
    /*put the contents of s1 and s2 to p*/
    for (i = 0; s1[l1] != '\0'; i++)
        p[i] = s1[i];
    for(j = 0; s2[l2] != '\0'; j++)
    {   p[i] = s2[j];
        i++;
    }
    p[i] = '\0';
   
    return (p);
}