#include "monty.h"

/**
 * rotl - Rotates the stack to the top.
 * @stack: Pointer to the head of the stack.
 * @line_number: Line number of the instruction.
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp, *last;

	(void) line_number;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	temp = *stack;
	last = *stack;

	while (last->next != NULL)
		last = last->next;

	*stack = temp->next;
	(*stack)->prev = NULL;
	last->next = temp;
	temp->next = NULL;
	temp->prev = last;
}
