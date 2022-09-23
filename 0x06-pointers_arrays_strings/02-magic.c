#include <stdio.h>

int main(void)
{

	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * write your code line
	 * - not allow to use a
	 * - not allow to use p
	 * - only one statement 
	 * - not allowed to code anything other code
	 */
       *(p + 5) = 98;
/* ... this can be printed 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
