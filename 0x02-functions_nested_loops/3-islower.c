#include "holberton.h"

/**
 * _islower - Checks for lowercase
 * @c: The character in ASCII code
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	_putchar('\n');
}
