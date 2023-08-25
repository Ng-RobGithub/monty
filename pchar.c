#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * f_pchar - Prints the char at the top of the stack
 * @stack: Double pointer to the beginning of the stack
 * @line_number: Line number of the opcode in the Monty file
 * Return: no return
 */
void f_pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *s;

	s = *stack;

	if (!s)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (s->n > 127 || s->n < 0)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", s->n);
}
