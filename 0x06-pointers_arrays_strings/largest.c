#include <stdio.h>

/**
 * main - prints the largest number of the three
 * Return: 0
 */

int main void 
{
	int a, b, c;

	printf("enter the three numbers:");
	scanf("%d, %d, %d",& a, &b, &c);
	if (a > b && a > c)
		printf("%d is largest", a);
	if (b > a && b > c)
		printf("%d is largest", b);
	if (c > b && c > a)
		printf("%d is largest", c);
	if (a == b && a == c)
		printf("All are equal");
	return (0);
}
