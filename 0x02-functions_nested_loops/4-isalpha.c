#include "main.h"

/**
 * _isalpha - function that checks for alphabets
 * @c: parameters to be checked
 * Return: always zero
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) | (c >= 65 && c <= 90))
		return (1);
	else
		return (0);

}
