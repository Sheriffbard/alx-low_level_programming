#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all possible different combinations of two digits
 * Return: Always return (0) success
 */
int main(void)
{
	int c, v;

	for (c = '0'; c <= '9'; c++)
	{
		for (v = '0'; v <= '9'; v++)
		{
			if (c < v)
			{
				putchar(c);
				putchar(v);

					if (c != '8' || (c == '8' && v != '9'))
					{
						putchar(',');
						putchar(' ');
					}
			}
		}
	}
	putchar('\n');
	return (0);
}

