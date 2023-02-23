#include "main.h"

/**
 * _isupper - a functions that checks for uppercase character
 * @c: parameter
 * Return: if C is uppercase return 1 otherwise return 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
