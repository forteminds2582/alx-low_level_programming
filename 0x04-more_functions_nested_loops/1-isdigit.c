#include "main.h"

/**
 * _isdigit - a function that prints only when digits are encountered
 * @c: parameter
 * Return: always return 1 if c is a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
		return (1);
	else
		return (0);
}
