#include <stdio.h>

/**
 * main - a program that prints the sizes of various computer types
 *
 * Return: 0 on success
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: $lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: %lu byte(s)"\n, (unsigned long)sizeof(f));
	return (0);
}
