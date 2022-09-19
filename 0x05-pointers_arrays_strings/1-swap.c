#include "main.h"

/**
 * swap_int - Checks student(s) code
 * @a: 1st variable to be swapped
 * @b: 2nd variable to be swappef
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
