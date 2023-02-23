#include "main.h"
/**
 * print_most_numbers - funtion to print most numbers
 * Return: always return 0
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0' ; c <= '9' ; c++)
	{
		if (c != '4' && c != 9)
			_putchar(c);
	}
	_putchar('\n');
}
