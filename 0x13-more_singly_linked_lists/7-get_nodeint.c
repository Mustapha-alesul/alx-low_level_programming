#include "lists.h"

/**
 * get_nodeint_at_index - a function returns the nth node of a listint_t linked list
 * @head: a pointer of first node
 * @index: node index as integer
 * Return: return whether pointer or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m = 0;
	listint_t *n = head;

	while (n && m < index)
	{
		n = n->next;
		m++;
	}
	return (n ? n : NULL);
}
