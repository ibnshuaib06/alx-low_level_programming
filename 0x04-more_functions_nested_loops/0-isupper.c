#include "main.h"
/**
 * _isupper - to check for uppercase character
 * @c: an uppercase to check for
 *
 * Return: either 1 or 0 base on the given condition
 */
int _isupper(int c)
{
	if (c >= 65 &&  c <= 90)
		return (1);
	else
		return (0);
}
