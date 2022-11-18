#include "main.h"

/**
 * print_diagsums - print sum of two diagonals in a square matrix
 *
 * @a: the matrix
 * @size: the size
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, j, k, d1, d2;

	k = 0;
	d1 = 0;
	d2 = 0;

	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
		{
			(i == j) ? d1 += a[k] : 0;
			(i + j == size - 1) ? d2 += a[k] : 0;
			k++;
		}
	_putchar("%i,%i\n", d1, d2);
}
