#include "main.h"
/**
 * palindromeChecker - checks string
 * @str: string to be checked
 * @len: string length
 * @i: increments from 0
 * Return: 1 if palindrome otherwise 0
 */
int palindromeChecker(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
		return (palindromeChecker(str, len - 1, i + 1));
	if (str[i] != str[len])
		return (0);
	return (1);
}
/**
 * _strlen_recursion - returns string length
 * @s: check string length
 * Return: integer that displays string length
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if palindrome otherwise 2
 */
int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s) - 1;

	return (palindromeChecker(s, length, i));
}
