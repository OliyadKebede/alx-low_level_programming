#include <stdio.h>
#include "lists.h"

/**
* list_len - A function that returns the number of elements in a list.
* @h: A constant variable of type list_t.
*
* Return: The number of nodes (i).
*
*/
size_t list_len(const list_t *h)
{
unsigned int i;
const list_t *new = h;

	for (i = 0; new; i++)
	{
		new = new->next;
	}
return (i);
}
