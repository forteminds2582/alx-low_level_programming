#include "main.h"
/**
 * print_numbers - a function that prints numbers from 0 to 9
 * Return: always return 0
 */

void print_numbers(void)
{
	char c;

	for (c = '0' ; c <= '9' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
