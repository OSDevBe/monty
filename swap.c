#include "monty.h"

/**
 * _swap - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line number
 * Return: VOID
 */

void _swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, tmp;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	tmp = h->n;
	h->n = h->next->n;
	h->next->n = tmp;
}
