#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * write your line of code here...
	 * Remember:
	 * - i am not allowed to use a
	 * - also not allowed to modify p
	 * - with only one statement
	 * - just basically this line of code at that line
	 */
	*(p + 5) = 98;
	/* ...so that this printsm 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
