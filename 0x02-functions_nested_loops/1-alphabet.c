#include <main.h>

/**
 * main - Print alphabet
 * Description:Print alphabet in lower case
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for(i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	-putchar('\n');
	return (0);
}
