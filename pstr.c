#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  /* Include ctype.h for isascii function */
#include "monty.h"

/**
 * pstr - Print the string starting at the top of the stack.
 * @stack: Double pointer to the stack.
 * @line_number: Line number in the Monty file.
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	(void)line_number; /* Unused parameter */

	current = *stack;

	while (current != NULL && current->n != 0 && current->n >= 0 && current->n <= 127)
	{
		putchar(current->n);
		current = current->next;
	}

	putchar('\n');
}
