#include <stdio.h>

int main(void)
{
int n;
int a[5];

a[2] = 1024;

*(&n + 3) = 98;
	/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}


