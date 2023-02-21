#include "main.h"

/**
 * print_alphabet - print alphabet
 * descriptionn:this task is done by TEMESGENABDISSA
 * Return: void
 */
void print_alphabet(void)
{
	char alpha  = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
