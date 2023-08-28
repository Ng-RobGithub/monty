#include "monty.h"

/**
 * free_stack - Frees a stack
 * @stack: Pointer to the stack
 *
 * Description: This function frees all the elements of the stack.
 */
void free_stack(stack_t **stack)
{
	stack_t *current = *stack;

	while (current)
	{
		stack_t *temp = current;

		current = current->next;
		free(temp);
	}

	*stack = NULL;
}
