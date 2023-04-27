#include "lists.h"
/**
 * free_list - frees a list
 * @head: head of list
 */
void free_list(list_t *head)
{
	list_t *tem;

	while (head)
	{
		tem = head;
		head = head->next;
		free(tem->str);
		free(tem);
	}
	free(head);
}
