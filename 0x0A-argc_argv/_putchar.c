#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c:Ther character to print
 *
 * Return: On success 1.
 * Error, -1 is returned and error no is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

