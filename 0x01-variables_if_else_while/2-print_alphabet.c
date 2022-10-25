#include<stdio.h>
#include<ctype.h>

/**
 * main - Entry point
 *
 * Description - Program that prints alphabet in lowercase using putchar only
 *
 * Return: 0 on success
 *
 * Auth: John M. Ngatia
 * Filename: 2-print_alphabet.c
 */

int main(void)

{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
		putchar('\n');

}
