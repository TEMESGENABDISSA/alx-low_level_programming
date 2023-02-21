#include "main.h"
#include <unistd.h>
/**
 * putchar - writes the character to stdout
 * @c:the character to print
 * return 0: correct
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
