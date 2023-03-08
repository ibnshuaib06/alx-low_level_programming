#include "main.h"
/**
 * _strlen_recursion - prints the length of a string
 * @s: string to printed
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit = longit + _strlen_recursion(s + 1);
	}
	return (longit);
}
