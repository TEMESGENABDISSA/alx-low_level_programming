#include "main.h"
/**
 * print the alphabet in lowercase
 * description: this task is done by TEMESGEN ABDISSA
 * return 0: always true
 */
void print_alphabet(void)
{
	char  alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);

	_putchar('\n');
}
