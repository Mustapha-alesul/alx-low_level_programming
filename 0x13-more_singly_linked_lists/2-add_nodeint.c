#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - a function that adds a new node at
 * the beginning of a listint_t list
 * @head: pointer to first node
 * @n: data of  the second node
 * Return: new node or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *second_node;

	second_node = malloc(sizeof(listint_t));
	if (!second_node)
		return (NULL);
	second_node->n = n;
	second_node->next = *head;
	*head = second_node;
	return (second_node);
}
