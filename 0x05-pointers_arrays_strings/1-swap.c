#include "main.h"

/**
 * swap_int - swaps the values of two integer
 * @u: pointer to the first integer
 * @v: pointer to the second interger
 *
 * Return: Null
 */
void swap_int(int *u, int *v)
{
	int swp = *u;
	*u = *v;
	*v = swp;
}
