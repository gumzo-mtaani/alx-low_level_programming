#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
 * Auth: John Ngatia
 * File Name: 0x01-variables_if_else_while
 *
 * main - Determine if the number is positive, zero or negative
 *
 * return (0) on success
 */

int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*My code starts*/
	if (n > 0)
	{
		printf("%d is postive\n",n); 
	}
	else if (n < 0)
	{
		printf("You entered %d which is a negative number\n",n);	
	}
	else
		printf("You entered %d which is zero\n",n);
	return (0);
}






