#include "main.h"
/**
 * _strcmp - compares strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: value less than 0 if less than the other.
 * Equals 0 if strings are equal and greater than 0 if greater than the other.
 */
int _strcmp(char *s1, char *s2)
{
	int counter, cmpVal;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	cmpVal = s1[counter] - s2[counter];
	return (cmpVal);
}
