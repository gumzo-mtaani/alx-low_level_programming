#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints half a string and new line
 * @str: the string
 */

void puts_half(char *str)
{
	int i, j, n;

	i = strlen(str);
	if (i % 2 == 1)
		j = i / 2 + 1;
	else
		j = i / 2;
	for (n = j;  n < i; n++)
		_putchar(str[i]);
	_putchar('\n');
}
