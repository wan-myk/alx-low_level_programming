#include "main.h"

/**
 * _strlen - return length of str
 * @s: var checking the length of str
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0;

	for (; *s++;)
		i++;
	return (i);
}
