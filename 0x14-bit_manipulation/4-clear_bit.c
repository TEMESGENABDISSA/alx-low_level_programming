#include "main.h"

/**
 * clear_bit - Clears a bit at a given index in a given unsigned long int
 * @n: A pointer to the unsigned long int
 * @index: The index of the bit to clear
 *
 * Return: 1 on success, -1 if index is out of range
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1); /* index out of range */
	}

	unsigned long int mask = ~(1UL << index);
	*n &= mask;

	return (1); /* success */
}

