#include "lists.h"

/**
 * find_listint_loop - find loop in linked list
 * @head: pointer to head pointer of linked list
 *
 * Return: address of node where loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *back, *front;

	back = front = head;

	while (back != NULL && front != NULL)
	{
		back = back->next;
		front = front->next->next;

		if (back == front)
		{
			back = head;
			while (back != front)
			{
				back = back->next;
				front = front->next;
			}

			return (back);
		}
	}

	return (NULL);
}
