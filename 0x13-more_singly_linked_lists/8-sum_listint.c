#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - a function that returns the sum of all the data (n)
 * of a listint_t linked list. 
 * Return: Always retturn 0.
 */
int main(void)
{
    listint_t *head;
    int s;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    s = sum_listint(head);
    printf("sum = %d\n", s);
    free_listint2(&head);
    return (0);
}

