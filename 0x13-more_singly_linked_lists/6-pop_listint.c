#include "lists.h"

/**
 * pop_listint - deletes the head node, and returns the head node’s data
 * @head: linked list
 * Return: deleted head node's data
 */

int pop_listint(listint_t **head)
{
	int head_data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	head_data = temp->n;

	*head = temp->next;
	free(temp);

	return (head_data);

}
