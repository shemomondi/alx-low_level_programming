#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int m, counts = 0;
	unsigned long int now;

	for (m = 63; m >= 0; m--)
	{
		now = n >> m;

		if (now & 1)
		{
			_putchar('1');
			counts++;
		}
		else if (counts)
			_putchar('0');
	}
	if (!counts)
		_putchar('0');
}

