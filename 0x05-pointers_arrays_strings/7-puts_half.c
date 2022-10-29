#include "main.h"

/**
 * puts_half - prints half a string and new line
 * @str: the string
 */

void puts_half(char *str)
{
	int i, len;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	if (len % 2 != 0)
		len = (len + 1) / 2;
	else
		len /= 2;
	while (len < 1)
	{
		len++;
		_putchar(*(str + len - 1));
	}
	_putchar('\n');
}
