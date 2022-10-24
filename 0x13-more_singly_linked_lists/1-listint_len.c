#include "lists.h"

/**
 * listint_len - Returns the number of nodes in a list
 * @h: The head of the list
 *
 * Return: The number of nodes or 0
 */
size_t listint_len(const listint_t *h)
{
	size_t numElem = 0;

	while (h != NULL)
	{
		numElem++;
		h = h->next;
	}

	return (numElem);
}
