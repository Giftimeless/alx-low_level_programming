#include "main.h"

/**
 * print_last_digit - function that prints the last digiy of a number
 * @n: number's last digit results
 * Return: return value of last digit
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		r = -1 * (n % 10);
		_putchar (r + '0');
		return (r);
	}
	else
	{
		r = n % 10;
		_putchar (r + '0');
		return (r);
	}
}
