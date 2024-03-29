#include "monty.h"

/**
 * _div - Divides the second top element of the stack by the top element.
 * @stack: Double pointer to the beginning of the stack.
 * @line_number: Line number being executed from script file.
 */
void _div(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);

		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);

		exit(EXIT_FAILURE);
	}

	(*stack)->next->n /= (*stack)->n;
	f_pop(stack, line_number);
}
