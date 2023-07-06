#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: number
 * @m: number
 *
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned int count = 0;

    while (n != m)
    {
        if (n & 1)
            n = n >> 1;
        else
            n = n >> 1;
        count++;
    }
    return (count);
}
