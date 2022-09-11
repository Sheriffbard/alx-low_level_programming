#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all possible combinations of single-digit numbers
 * Return: Always (0) success
 */
int main(void)
{
	int h;

	for (h = '0'; h <= '9' ; h++)
	{
		putchar(h);

		if (h != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

