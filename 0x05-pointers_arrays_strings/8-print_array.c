#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elemants of an array of integers
 * @arr: input array
 * @n: input n elements
 *
 * Return: Nothing
 */
void print_array(int *arr, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(arr + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
