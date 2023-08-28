#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * f_push - Pushes an element onto the stack.
 * @stack: Double pointer to the stack.
 * @line_number: Line number of the instruction in the file.
 */
void f_push(stack_t **stack, unsigned int line_number)
{
	char *num_str = strtok(NULL, " \n\t");
	int n;
	stack_t *new_node;

	if (num_str == NULL || !is_number(num_str))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	n = atoi(num_str);

	/* Create a new node */
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = n;
	new_node->next = *stack;
	new_node->prev = NULL;

	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}

/**
 * f_pall - Prints all the values on the stack.
 * @stack: Double pointer to the stack.
 * @line_number: Line number of the instruction in the file.
 */
void f_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	(void)line_number;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
