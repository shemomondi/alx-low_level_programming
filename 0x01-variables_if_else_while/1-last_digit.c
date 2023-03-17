#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Print if the number is positive,zero or negative
 * Return: 0 (Success)
 *
 */
/* betty style doc for function main goes there */
int main(void)

{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd  = n % 10;

	if (lastd > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, lastd);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 not 0\n", n, lastd);
	}
	/* your code goes there */
	return (0);
}
