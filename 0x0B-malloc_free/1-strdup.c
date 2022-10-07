#include "main.h"
/**
 * _strlen - count array
 * @s: array of elements
 * Return:
 */

int _strlen(char *s)
{
	unsigned int i;
	
	i = 0;
	while (s[i] !='\0')/** Count string */
	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - copy arrays
 * @src: array of elements
 * @dest: array destinatioon
 * Return : dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] i
