#include<stdio.h>

/**
 * main - Entry Point
 *
 * Description: print all numbers of base 16 in lowercase followed by new line
 *
 * Return: 0 on success
 *
 * Auth: John M. Ngatia
 * Filename: 8-print_base16.c
 */

int main(void)
{

	int num;
	char alphabet;

	/* for the numbers 0 through 9 */
	for (num = 0; num <= 0; num++)
		putchar((num % 10) + '0');

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);


}
