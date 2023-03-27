#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
/**
 * stack_ops- Function pointer for stack operations
 * Description: This function selects the stack operations to be done
 * @op_code: The stack operation to be perfomed
 * Return: returns nothing
 */
void (*stack_ops(char *opcode))(stack_t **stack, unsigned int line_number)
{
	instruction_t instructions[8] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"nop", nop},
		{"add", add},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 8)
	{
		if (strcmp(opcode, instructions[i].op_code) == 0)
		{
			return (instructions[i].f);
		}
		i++;
	}
}
