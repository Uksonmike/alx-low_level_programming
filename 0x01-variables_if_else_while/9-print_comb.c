#include <stdio.h>

/**
 * main - Print single digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;

	for (m = 48; m < 58; m++)
	{
		putchar(m);
		if (m != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
