#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Prints a name
 * @name: This is the name to be printed
 * @f: This is a pointer to a func
 *
 * Return: Null Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
