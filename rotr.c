#include "monty.h"

/**
 * rotr - Rotates the stack to the bottom.
 * @stack: Pointer to the head of the stack.
 * @line_number: Line number of the instruction.
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	/*stack_t *temp; */
	stack_t *last;

	(void) line_number;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	/*temp = *stack; */
	last = *stack;

	while (last->next != NULL)
		last = last->next;

	last->prev->next = NULL;
	last->next = *stack;
	(*stack)->prev = last;
	*stack = last;
	last->prev = NULL;
}
