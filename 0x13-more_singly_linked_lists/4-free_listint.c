#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 * @head: pointer in a function
 * Return: no return(void)
 */

void free_listint(listint_t *head)
{
	listint_t *m;

	while (head != NULL)
	{
		m = head->next;
		free(head);
		head = m;
	}
}
