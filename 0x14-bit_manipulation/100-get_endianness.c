#include "main.h"

int get_endianness(void)
{
int x = 1;
char *c = (char *)&x;



return (int)(*c);

}
