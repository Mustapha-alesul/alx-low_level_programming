#include "lists.h"

/**
 * listint_len - ia function that returns the number of
 * elements in a linked listint_t list
 * @h: pointer of listint_t
 * Return: return nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t e = 0;

	while (h)
	{
		e++;
		h = h->next;
	}
	return (e);
}
