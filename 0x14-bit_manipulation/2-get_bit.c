#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the unsigned long integer to retrieve the bit from
 * @index: the index of the bit to retrieve, starting from 0
 *
 * Return: the value of the bit at index index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		/* Error: index out of range */
		return (-1);
	}

	unsigned long int mask = 1UL << index;

	return ((n & mask) != 0);
}

