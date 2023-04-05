#include "lists.h"

/**
 * add_nodeint_end -  a function that adds a new node at the
 * end of a listint_t list
 * @head: pointer of first node
 * @n: nodes we have in function
 * Return: new node or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *second_node;
	listint_t *t;

	second_node = malloc(sizeof(listint_t));
	if (second_node == NULL)
		return (NULL);
	second_node->n = n;
	second_node->next = NULL;

	if (*head == NULL)
	{
		*head = second_node;
	}
	else
	{
		t = *head;
	while (t->next != NULL)
	{
		t = t->next;
	}
	t->next = second_node;
	}
	return (second_node);
}
