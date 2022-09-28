nclude "main.h"

/**
 * is_prime - Checks if a number is prime or not
 * @n: number to check
 * @y: a buffer
 *
 * Return: 1 if true, 0 otherwise
 */
int is_prime(int n, int y)
{
	if (n == 1)
		return (0);
	else if (n % y == 0 && y != n && y != 1)
		return (0);
	else if (n % y == 0 && y == n)
		return (1);
	else
		return (is_prime(n, y + 1));
}

/**
 * is_prime_number - Returns whether prime or not to main
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	return (is_prime(n, 1));
}
