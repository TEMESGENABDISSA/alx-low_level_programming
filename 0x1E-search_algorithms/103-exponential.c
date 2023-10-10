#include "search_algos.h"
/**
  * _binary_search - Search for the  value in the  sorted_array
  *                  of integer using binary_search.
  * @array:  pointer to first element of the array to search.
  * @left: The starting index of the sub array to search.
  * @right: The ending index of the sub array to search.
  * @value: The value to search for.
  * done by temesgen abdissa
  * Return: If the value is not present or  NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the sub array being searched after each changes.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

/**
  * exponential_search - Search for the  value in  the  sorted array
  *                      of integer using exponential search.
  * @array: pointer to the first element of the array- search.
  * @size: The number of elements in the array.
  * @value: A value to search for.
  * done by Temesgen Abdissa
  * Return: If the value is not present or NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the  value every time  is compared in the array.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
