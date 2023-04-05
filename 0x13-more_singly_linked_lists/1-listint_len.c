#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: the list in question
 *
 * Return: number of nodes in list
 */

size_t listint_len(const listint_t *h)
{
	size_t node_total = 0;

	while (h != NULL)
	{
		node_total += 1;
		h = h->next;
	}

	return (node_total);
}
