#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a linked list, even if it
 * has a loop
 *
 * @head: head of list to print
 *
 * Return: number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	int loop;
	listint_t *loopnode;

	loopnode = find_listint_loop_pl((listint_t *) head);

	for (len = 0, loop = 1; (head != loopnode || loop) && head != NULL; len++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == loopnode)
			loop = 0;
		head = head->next;
	}

	if (loopnode != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (len);
}
