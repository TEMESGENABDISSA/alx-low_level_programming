#include "search_algos.h"
/**
 * linear_search - searches for a value in an array (linear search)
 * @array:  the array of integers
 * @size: the  size of array
 * @value: A  value that should be found
 * done by temesgen abdissa
 * Return: index of value searched or -1 if it doesn't exist
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}

	return (-1);
}
