#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list and returns the head node’s data (n)
 * @head: pointerof function
 * Return: return p value
 */

int pop_listint(listint_t **head)
{
	listint_t *m;
	int p;

	if (head == NULL || *head == NULL)
		return (0);
	p = (*head)->n;
	m = (*head)->next;
	free(*head);
	*head = m;
	return (p);
}
