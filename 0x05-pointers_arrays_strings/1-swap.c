#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: first int to be swaped
 * @b: secone int to be swaped
 *
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
