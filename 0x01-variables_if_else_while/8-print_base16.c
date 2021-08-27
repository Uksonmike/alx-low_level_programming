#include <stdio.h>

/**
 * main - Print Hexadecimal
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;
	char i;

	for (m = 48; m < 58; m++)
	{
		putchar(m);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
