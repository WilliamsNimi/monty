#include "monty.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * swap- This is the swap function
 * Description: This function swaps the first 2 elements of a stack
 * @stack: The stack whose elements are to be swapped
 * Return: Returns nothing
 */
void swap(stack_t **stack)
{
	int first, second;
	stack_t *new_stack;

	new_stack = *stack;
	if (new_stack == NULL || new_stack->next->next == NULL)
	{
		fprintf(stderr, "L<line_number>: can't swap, stack too short\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		first = new_stack->n;
		second = new_stack->next->n;
		(*stack)->n = second;
		(*stack)->next->n = first;
	}
}
