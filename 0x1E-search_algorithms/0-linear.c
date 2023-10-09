#include "search_algos.h"
/**
 * linear_search - search for a value in an array 
 * @array: the  array of integer
 * @size: a size of th  array
 * @value: a  value that should be found
 * done by temesgen abdissa
 * Return: the  index of value search  -1 if it doesn't exist
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
