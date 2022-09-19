#include "main.h"

/**
 * puts2 - check student(s) code
 * @str: string for alternate printing
 * Return: Always 0
 */
void puts2(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
		i++;

	i--;

	for (j = 0; j <= i; j++)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}
	_putchar('\n');
}
