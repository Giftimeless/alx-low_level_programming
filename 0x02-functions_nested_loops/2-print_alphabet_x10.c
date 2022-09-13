#include "main.h"

/**
 * main - print alphabet x10
 * Description: Print alphabet by x10
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');

		i++;
	}
}
