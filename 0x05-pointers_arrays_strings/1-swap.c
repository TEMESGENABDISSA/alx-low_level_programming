#include "main.h"

/**
 * swap_int - swaps the value of int a and int b
 * @a: first int to swap
 * @b: second int to swap
 * done by Temesgen Abdissa
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
