#include "main.h"

/**
 * _puts - print a string to the stdout
 * @str: variable for the str
 * Return: 0
 */

void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
