#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i,a,b;
	i=0;

	while (i < 99)
	{
		a=i/10;
		b=i%10;
		if(a >= b)
		{
			i++;
			continue;
		}
		putchar(a + '0');
		putchar(b + '0');
		if (i != 89)
		{
			putchar(',');
		}
		i++;
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
