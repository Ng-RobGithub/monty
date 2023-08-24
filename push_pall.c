#include "monty.h"

/**
 * push - Function to push an element onto the stack
 * @stack: Pointer to the stack
 * @n: The value to push onto the stack
 */
void push(stack_t **stack, int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = n;
	new_node->next = *stack;
	*stack = new_node;
}

/**
 * pall - Function to print all elements in the stack
 * @stack: Pointer to the stack
 */
void pall(stack_t **stack)
{
	stack_t *current = *stack;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
