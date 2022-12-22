#include <stdio.h>
#include "main.h"


int main(int argc, char *argv[])
{
	//Print the number of arguments passed to the program
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
		for (i = 0; *argv; i++; argv++);
		printf("%d\n", i - 1);
	return 0;

}
