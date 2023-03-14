#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of args passed to it
 * @argc: counts args passed
 * @argv: args vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
