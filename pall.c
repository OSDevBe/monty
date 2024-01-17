#include "monty.h"

/**
 * _pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: VOID
 */

void _pall(stack_t **head, unsigned int counter)
{
	stack_t *tmp;
	(void)counter;

	tmp = *head;
	if (tmp == NULL)
		return;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
