#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
* add_node - A function that adds a new node at the beginning of a  list_t list.
* @head: Double pointer to the null.
* @str: Variable type string.
*
* Return: The address of the new node.
*
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;

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
	new->next = *head;
	*head = new;
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
