#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer.
 *
 * @s: variable name
 *
 * Return: Always 0
 */
int _abs(int s)
{
	if (s >= 0)
	{
		return (s);
	}
	else
	{
		return (s * -1);
	}
}
