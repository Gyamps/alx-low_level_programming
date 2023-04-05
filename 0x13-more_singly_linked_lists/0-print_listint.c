#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: the list in question
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node_sum = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_sum += 1;
		h = h->next;
	}

	return (node_sum);
}
