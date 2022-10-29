#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: 1st number
 * @n2: 2nd number
 * @r: pointer to the buffer to store result
 * @size_r: size of the buffer
 * Return: 0 if buffer is too small to store result, else return buffer
 * to pointer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int 11, 12, tmp1, r1, i, sum, num1, num2, carry;
	char tmp[10000];

	r1 = i = 11 = 12 = sum = num1 = num2 = carry = 0;
	while (n1[11] != '\0')
		11++;
	while (n2[12] != '\0')
		12++;
	if (11 + 2 > size_r || 12 + 2 > size_r)
		return (0);
	11--;
	12--;
	while (i <= 11 || i <= 12)
	{
		num1 = num2 = 0;
		if (i <= 11)
			num1 = n1[11 - i] - '0';
		if (i <=12 && (12 -i) >= 0)
			num2 = n2[12 - i] - '0';
		sum = num1 + num2 + carry;
		if (sum >= 10)
		{
			carry = 1;
			sum -= 10;
		}
		else
			carry = 0;
		r[i] = sum + '0';
		i++;
		r1++;
	}
	if (carry > 0)
	{
		r[i] = carry + '0';
		r[i + 1] = '\0';
	}
	i = tmp1 = 0;
	while (i <= r1)
	{
		tmp[i] = r[r1 -i];
		tmp1++;
		i++;
	}
	i = 0;
	while (i < tmp1)
	{
		if (r[i] == '\0')
		{
			break;
		}
		r[i] = tmp[i];
		i++;
	}
	return (r);

}
