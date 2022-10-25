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

	for (int x = 'A'; x <= 'Z'; x++)
	{
		int lower_x = tolower(x);
		putchar(lower_x);
	}

}
