#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Determines if last number is greater than 5, is zero
 * 	or is less than 6 and not 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	char last [] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX/2;
	
	/* My code begins*/
	if ((n % 10) != 0 && (n % 10) < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	else if ((n % 10) > 5)
	{
	        printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else
	        printf("Last digit of %d is %d and is 0\n", n, n % 10);
	return (0);


}
