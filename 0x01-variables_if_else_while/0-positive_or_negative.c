#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 *main - Determine if generated random number is positive, negative or zero
 * Auth: John Ngatia
 * File Name: 0x01-variables_if_else_while
 *
 * main - Determine if a random number is positive, zero or negative
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*My code starts*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
		printf("%d is zero\n", n);
	return (0);
}






