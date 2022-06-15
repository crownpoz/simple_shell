#include <stdio.h>
#include <stdlib.h>
#include "shell.h"

/**
 main - function that reads a line to stdout
 Return: 0
 */

int main(void)
{
	char *buffer;
	size_t len = 1024;
	int read;

	buffer = malloc(sizeof(size_t)*len);

	while(1)
	{
		_putchar('$ ');
		read = getline(&buffer,&len,stdin);
		if (read != EOF)
			printf("%s", buffer);
	}
	return (0);
}
