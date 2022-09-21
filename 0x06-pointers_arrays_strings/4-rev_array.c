#include "main.h"
/**
 * reverse_array - Reverse an array
 * @a: pointer to array
 * @n: number of an array element
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temp = a[counter];
		a[counter++] = a[n];
		a[n - 1] = temp;
	}
}
