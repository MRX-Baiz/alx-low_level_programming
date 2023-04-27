#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: head of list
 * @str: str
 * Return: address of the new element, or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nd;
	list_t *tmp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	nd = malloc(sizeof(list_t));
	if (!nd)
		return (NULL);
	nd->str = strdup(sttr);
	nd->len = len;
	nd->next = NULL;
	if (*head == NULL)
	{
		*head = nd;
		return (nd);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = nd;
	return (nd);
}
