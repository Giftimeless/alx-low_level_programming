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

	n--;

	for (counter = 0; counter < n; counter++, n--)
	{
		temp = a[counter];
		a[counter] = a[n];
		a[n] = temp;
	}
}
