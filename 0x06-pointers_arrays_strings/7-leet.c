#include "main.h"
/**
 * leet - encodes string into letter
 * replace letters a amd A with 4
 * replace letters e amd E with 3
 * replace letters o and O with 0
 * replace letters t and T with 7
 * replace letters l and L with 1
 * @s: pointer to string
 * Return: pointer to s
 */
char *leet(char *s)
{
	int stringCount, leetCount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	stringCount = 0;
	while (s[stringCount] != '\0')
	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (leetLetters[leetCount] == s[stringCount])
			{
				s[stringCount] = leetNums[leetCount];
			}
			leetCount++;
		}
		stringCount++;
	}
	return (s);
}
