#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Check students code
 * @dest: Destination of string
 * @src: string to be copied from
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != 0)
		i++;

	for (j = 0; j <= i; j++)
		dest[j] = src[j];

	return (dest);
}
