#include "monty.h"

/**
 * stack - Sets the format of the data to a stack (LIFO).
 * @stack: A pointer to the top of the stack.
 * @line_number: The current line number being processed.
 * @data: A pointer to the data_t struct.
 *
 * Return: None.
 */
void stack(stack_t **stack, unsigned int line_number, data_t *data)
{
	/* data_t data;  Declare the data variable */
	(void) stack;
	(void) line_number;
	data->queue_mode = 0;
}

/**
 * queue - Sets the format of the data to a queue (FIFO).
 * @stack: A pointer to the top of the stack.
 * @line_number: The current line number being processed.
 * @data: A pointer to the data_t struct.
 *
 * Return: None.
 */
void queue(stack_t **stack, unsigned int line_number, data_t *data)
{
	/*data_t data; Declare the data variable*/
	(void) stack;
	(void) line_number;
	data->queue_mode = 1;
}
