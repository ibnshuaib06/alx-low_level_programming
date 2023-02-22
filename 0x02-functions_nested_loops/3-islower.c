#include "main.h"
/**
 * _islower - a func that checks for lowercase
 * @c: the character in ASCII table
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
