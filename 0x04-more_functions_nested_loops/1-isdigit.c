#include "main.h"
/**
 * _isdigit - a func that checks for a digit
 * @c: a digit
 *
 * Return: return 1 if true and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
