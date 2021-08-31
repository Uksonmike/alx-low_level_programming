#include "holberton.h"

/**
 * _isalpha - Checks for alphabetical xters
 * @c: The character in ASCII code
 * Return: Always 1 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
	_putchar('\n');
}
