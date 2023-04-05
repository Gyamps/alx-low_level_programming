#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete a node at a given position
 * @head: pointer to head pointer of linked list
 * @index: index to delete node
 *
 * Return: 1 if succeeded, or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int i = 0;
	listint_t *temp, *tmp;


	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);

		return (1);
	}


	while (i < (index - 1) && tmp != NULL)
	{
		temp = temp->next;
		i++;
	}


	if (i != (index - 1) || temp->next == NULL)
		return (-1);


	tmp = temp->next;
	temp->next = (temp->next)->next;
	free(tmp);

	return (1);
}
