#include "main.h"
#include <stddef.h>
char *_strpbrk(char *s, char *accept)
{
    char *p;

    while (*s != '\0') {
        for (p = accept; *p != '\0'; p++) {
            if (*s == *p) {
                return s;
            }
        }
        s++;
    }

    return NULL;
}

