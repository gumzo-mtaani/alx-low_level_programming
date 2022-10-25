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
	printf("%s %d is %d and is ", last, n, n % 10);
		if (n % 10 > 5)
		{
			printf("greater than 5\n");
		}
		else if (n % 10 == 0)
		{
			printf("0\n");
		}
		else
		{
			printf("less than 6 and not 0\n");
		}
		return (0);


}
