#include "main.h"

/**
 * binary_to_uint - A function  converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int d_v = 0;

	if (!b)
		return (0);

	for (n = 0; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		d_v = 2 * d_v + (b[n] - '0');
	}

	return (d_v);
}

