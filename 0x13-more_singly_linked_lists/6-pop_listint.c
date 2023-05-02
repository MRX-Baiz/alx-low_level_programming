#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head
 * Return: n or 0
 */
int pop_listint(listint_t **head)
{
	int f;
	listint_t *n;

	if (!head || !*head)
		return (0);
	n = (*head)->next;
	f = (*head)->n;
	free(*head);
	*head = n;
	return (f);
}
