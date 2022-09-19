#include "main.h"

/**
 * print_rev -check student(s) code
 * @s: strings to be reversely printed
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;

	for (i -= 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
