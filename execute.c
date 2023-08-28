#include "monty.h"

/**
 * execute_opcode - Execute the given opcode
 * @opcode: The opcode to execute
 * @stack: Pointer to the stack
 * @line_number: Line number of the opcode
 *
 * Description: This function executes the given opcode by looking up the
 * corresponding function and calling it with the provided stack and line number.
 */
void execute_opcode(stack_t **stack, char *opcode, unsigned int line_number)
{
	instruction_t opcodes[] = {
		{"push", f_push},
		{"pall", f_pall},
		{"pint", f_pint},
		{"pop", f_pop},
		{"swap", f_swap},
		{"add", f_add},
		{"nop", f_nop},
		{"sub", f_sub},
		{"div", f_div},
		{"mul", f_mul},
		{"mod", f_mod},
		{"pchar", f_pchar},
		{"pstr", f_pstr},
		{"rotl", f_rotl},
		{"rotr", f_rotr},
		{"stack", f_stack},
		{"queue", f_queue},
		{NULL, NULL}
	};

	int i = 0;

	while (opcodes[i].opcode)
	{
		if (strcmp(opcode, opcodes[i].opcode) == 0)
		{
			opcodes[i].func(stack, line_number);
			return;
		}
		i++;
	}

	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
