#include "main.h"

/**
 * _strncpy
 * @dest: Destination string
 * @src: String to be added
 * @n: Array index restriction
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];

	while (j != n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
