#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer of function
 * Return: no return (void)
 */

void free_listint2(listint_t **head)
{
	listint_t *m;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		m = (*head)->next;
		free(*head);
		(*head) = m;
	}
	*head = NULL;
}
