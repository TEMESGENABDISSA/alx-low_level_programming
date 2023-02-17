#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/* headers goes there */

/*betty function goes there*/
/**
* main -entry point 
*
* return:Always 0 (success)
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* code goes there */
if (n > 0)
       printf("%d is positive\n", n);
else if (n == 0)
      printf("%d is zero\n", n);
else
      printf("%d is negative\n", n);

   return (0);
}
