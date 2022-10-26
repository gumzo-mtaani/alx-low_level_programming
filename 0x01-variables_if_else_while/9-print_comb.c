#include<stdio.h>

/**
 * main - Entry Point
 *
 * Description: print single digits separated by commas
 *
 * Return: 0 on success
 *
 * Auth: John M. Ngatia
 * Filename: 9-print_comb.c
 */


int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);


}
