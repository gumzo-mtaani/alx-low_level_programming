#include "main.h"
#include <stdio.h>

/**
 * print_array - print n times elements of an array
 * @a: pointer
 * @n: times to print elements
 */

void print_array(int *a, int n)
{
	int i;
	
	i = 0;
	while ( i < n)
	{
		if (i != n -1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	_putchar('\n');
}
