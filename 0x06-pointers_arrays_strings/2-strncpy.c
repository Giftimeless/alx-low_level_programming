#include "main.h"

/**
 * _strncpy - copy string
 * @dest: Destination string
 * @src: String to be added
 * @n: Array index restriction
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);

}
