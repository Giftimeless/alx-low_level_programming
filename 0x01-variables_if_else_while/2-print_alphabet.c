#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char gift;	
	for (gift = 'a'; gift <= 'z'; gift++)
		putchar(gift);
	putchar('\n');
	return (0);
}

