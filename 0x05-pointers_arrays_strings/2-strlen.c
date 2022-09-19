#include "main.h"

/**
 * _strlen - Check Student(s) code
 * @s: Inputted string pointer
 * Return: Always 0 (success)
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

