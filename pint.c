#include "monty.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * pint- This is the print function
 * Description: This function prints the top element of a stack
 * @stack: The stack whose element is to be printed
 * Return: Returns nothing
 */
void pint(stack_t **stack)
{
	stack_t *new_stack;

	new_stack = *stack;
	if (new_stack == NULL)
	{
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("%d\n", new_stack->n);
	}
}
