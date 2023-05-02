#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: head
 * @n: elements
 * Return: the address of the new element, or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i = malloc(sizeof(listint_t)), *j;

	(void)j;

	if (i == NULL)
		return (NULL);
	i->n = n;
	i->next = NULL;
	j = *head;
	if (*head == NULL)
		*head = i;
	else
	{
		while (j->next != NULL)
			j = j->next;
		j->next = i;
	}
	return (*head);
}
