#include "lists.h"

/**
 * insert_nodeint_at_index -  function that inserts new node at given position
 * @head: pointerof  first node
 * @idx: index of the new added node
 * @n: second node
 * Return: returnsecond node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *second_node;
	listint_t *temp = *head;
	unsigned int m;

	second_node = malloc(sizeof(listint_t));

	if (!second_node || !head)
		return (NULL);
	second_node->n = n;
	second_node->next = NULL;

	if (idx == 0)
	{
		second_node->next = *head;
		*head = second_node;
		return (second_node);
	}
		for (m = 0; temp && m < idx; m++)
		{
			if (m == idx - 1)
			{
			second_node->next = temp->next;
			temp->next = second_node;
			return (second_node);
			}
		else
		temp = temp->next;
		}
		return (second_node);
}
