#include "main.h"
/**
 * _isalpha - function that checks for alphabetic characte
 * either lowercase or uppercase
 *
 * @c: Returns 1 if c is a letter, lowercase or uppercase
 *
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

