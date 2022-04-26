#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
* add_node_end - A function that adds a new node at the end of a list_t list.
* @head: Double pointer to the null.
* @str: Variable type string.
*
* Return: The address of the new node.
*
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *last;

	if (str == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	return (new);
	}
	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
return (new);
}
/**
* _strlen - Returns the length of a string.
* @s: The pointer.
*
* Return: To the value of s.
*/
int _strlen(const char *s)
{
int i;
i = 0;

	while (s[i] != 0)
	{
	i++;
	}
return (i);
}
