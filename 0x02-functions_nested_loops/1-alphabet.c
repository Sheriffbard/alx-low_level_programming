#include <main.h>

/**
 * main - Entry point
 * Description: prints the alphabet, in lowercase, followed by a new line
 * Return: Always (0) Success
 */
int main(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');

