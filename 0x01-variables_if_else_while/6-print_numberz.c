#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Lists all single digits in base ten starting from zero
 * using putchar
 *
 * Return: 0 on success
 *
 * Auth: John M. Ngatia
 * Filename: 6-print_numberz.c
 */

int main(void)

{

	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);

}
