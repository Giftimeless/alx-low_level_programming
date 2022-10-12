#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints name that is passed to it
 * @name: char to display to stdout
 * @f: a pointer function
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f) /*If any is null*/
		return;

	f(name);
}
