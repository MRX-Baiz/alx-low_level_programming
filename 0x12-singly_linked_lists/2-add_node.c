#include "main.h"
/**
 * _strlen - returns length of string
 * @s: char
 * Return: a
 */
int _strlen(const char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;
	return (a);
}
/**
 * add_node - adds a new node at the beginning of a list
 * @head: head of list
 * @str: string
 * Return: address of the new element, or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	unsigned int l = 0;

	while (str[l])
		l++;
	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);
	add->len = l;
	add->next = *head;
	*head = add;
	return (*head);
}
