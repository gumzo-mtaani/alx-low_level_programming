#include <stdio>

/**
 * main - entry point
 *
 * Return: 0 on success
 */

int main(void)
{
	int x;

	for (x = 1; x < 100; x++)
	{
		if ((x % 3) == 0 && (x % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		else
			print("%d ", x);
	}
	printf("Buzz");
	printf("\n");
	return (0);
}
