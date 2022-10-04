#include <string.h>
#include "main.h"

/**
 * _strcpy - copy string from src to dest
 * @dest: pointer to the destination string
 * @src: pointer to the string to be copied
 *
 * Return: pointer to the char with string copied (dest)
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
