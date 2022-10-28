#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 *
 * Return: 0 on success
 */

int main(void)
{

	int x;
	long num = 612852475143;

	for (x = (int) sqrt(num); x > 2; x++)
	{
		if (num % x == 0)
		{
			printf("%d\n", x);
			break;
		}
	}
	return (0);
}
