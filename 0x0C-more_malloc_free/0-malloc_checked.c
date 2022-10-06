#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - A function which allocates memory using malloc
 * @b: int var that holds the memory size
 * Return: 0 Success
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
