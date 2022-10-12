#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a funtion given as a parameter
 * on each element of an array
 * @array: array of integer
 * @size: size of integer
 * @action: funtion pointer
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
