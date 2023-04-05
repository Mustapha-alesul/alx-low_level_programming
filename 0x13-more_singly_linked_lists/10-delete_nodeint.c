#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at
 * index of a listint_t linked list
 * @head: pointer
 * @index: index to the deleted node
 * Return: 1 if success or -1 if fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *ex = NULL;
	unsigned int m = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

		while (m < index - 1)
		{
			if (!temp || !(temp->next))
				return (-1);
			temp = temp->next;
			m++;
		}
		ex = temp->next;
		temp->next = ex->next;
		free(ex);
		return (1);
}
