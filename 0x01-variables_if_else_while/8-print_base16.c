#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int i;
	char l;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		i++;
	}
	l = 'a';
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
