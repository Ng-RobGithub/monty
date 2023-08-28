#include "monty.h"

/**
 * pint - Prints the value at the top of the stack.
 * @stack: Double pointer to the beginning of the stack.
 * @line_number: Line number being executed from script file.
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d:usage:can't pint, stack empty\n", line_number);

		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
