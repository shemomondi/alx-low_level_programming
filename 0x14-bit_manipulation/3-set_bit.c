#include "main.h"

/**
 * set_bit - a function sets a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 23)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

