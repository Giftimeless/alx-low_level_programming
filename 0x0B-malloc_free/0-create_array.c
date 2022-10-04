#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * create_array - create an array of char dynamically
 * @size: size of memory to print
 * @c: the string
 * Return: 0 Successs except otherwise defined
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

	/*Define values using malloc*/
	*buffer = (char *)malloc(size * sizeof(c));
	if (buffer == 0)
	{
		return (NULL);
	}
	else
	{
		position = 0;
		while (position < size) /*While for array*/
		{
			*(buffer + position) = c;
			position++;
		}
		return (buffer);
	}
}
