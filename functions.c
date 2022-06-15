#include <unistd.h>
#include "shell.h"

/**
 *_putchar - writes the character c to standard ouput
 *@c: character to print
 *
 *Return: on sucess 1
 *On error: -1 is returned,and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 *print_s - prints a string
 @s: sring to be printed
 *
 *Return: number of characters printed
 */
int print_s(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		_putchar(s[x]);
			x++;
	}
	return (x);
}
