#include "main.h"
/**
 * print_alphabet_x10 - a func that prints 10 times the alphabet, in lowercase
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int a, n;

	for  (a = 1; a <= 10; a++)
	{
		for  (n = 97; n <= 122; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
