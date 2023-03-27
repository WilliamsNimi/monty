#include "monty.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * pall- This is the print all function
 * Description: This function prints all the element of a stack
 * @stack: The stack whose elements are to be printed
 * Return: Returns nothing
 */
void pall(stack_t **stack)
{
	stack_t *new_stack;

	new_stack = *stack;
	if (new_stack == NULL)
	{
		exit(EXIT_FAILURE);
	}
	else
	{
		while (new_stack != NULL)
		{
			printf("%d\n", new_stack->n);
			new_stack = new_stack->next;
		}
	}
}
