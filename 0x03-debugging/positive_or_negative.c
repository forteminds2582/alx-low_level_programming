#include "main.h"

/**
 * positive_or_negative - function to check for positive or negative integer
 * @i: parameter
 * Return: always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is positive\n", i);
	}
}
