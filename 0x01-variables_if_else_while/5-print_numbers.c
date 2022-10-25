#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digits of base 10 starting from 0
 *
 * Return: 0 on success
 * Auth: John M. Ngatia
 * Filename: 5-print_numbers.c
 */

int main(void)
{

	int x;

	while (x >= 0 && x < 10)
	{
		printf("%d\n", x);
		x++;
	}

	return (0);



}
