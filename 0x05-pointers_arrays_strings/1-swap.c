#include "main.h"

/**
 * swap_int - swaps values of two integers.
 * @a: first int
 * @b: second int
 * Return: 0.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
