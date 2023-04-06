#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 *
 * @n: Pointer to an unsigned long integer
 * @index: The index, starting from 0, of the bit to set
 *
 * Return: 1 if successful, or -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1); /* error: index is out of range */
	}

	*n |= (1UL << index); /* set the bit at the given index */

	return (1);
}

