#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head
 */
void free_listint2(listint_t **head)
{
	listint_t *c, *t;

	if (head != NULL)
	{
		c = *head;
		while ((t = c) != NULL)
		{
			c = c->next;
			free(t);
		}
		*head = NULL;
	}
}
