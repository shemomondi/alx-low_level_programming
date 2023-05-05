#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: number to be  searched
 * @index: index of the bit value
 *
 * Return: value of the bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b_v;

	if (index > 63)
		return (-1);

	b_v = (n >> index) & 1;

	return (b_v);
}

