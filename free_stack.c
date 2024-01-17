#include "monty.h"

/**
 * free_stack - frees the stack
 *
 * @head: head of the stack
 *
 * Return : VOID
 */

void free_stack(stack_t *head)
{
	stack_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
