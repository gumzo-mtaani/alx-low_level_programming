#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = i;
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




/**
 * main - debugging example
 * Return: 0 on success
 */
int main(void)
{
	int i;

	i = 0;
        positive_or_negative(i);

        return (0);
}
