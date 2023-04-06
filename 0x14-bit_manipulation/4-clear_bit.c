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
        /* index out of range */
        return (-1);
    }

    /* create a mask with a bit set to 0 at the index position and all other bits set to 1 */
    unsigned long int mask = ~(1UL << index);

    /* use the & operator to clear the bit at the index position in n */
    *n &= mask;

    /* return 1 to indicate success */
    return (1);
}

