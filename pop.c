#include "monty.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * pop- This is the pop function
 * Description: This function deletes elements from the stack
 * @stack: The stack to be deleted from
 * @n: The number to be deleted
 * Return: Returns nothing
 */
void pop(stack_t **stack, unsigned int)
{
	stack_t *new_element;

	if (*stack == NULL)
	{
		exit(EXIT_FAILURE);
	}
	else
	{
		new_element = *stack;
		*stack = (*stack)->next;
		free(new_element);
	}
}
