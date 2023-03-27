#include "monty.h"
#include <stdlib.h>
#include <stdio.h>
/** push- The push function
 * Description: This function pushes an element to the stack
 * @stack: The stack to add element to
 * @n: Number to push to stack
 * Return: Returns nothing
 */
void push(stack_t **stack, unsigned int n)
{
	stack_t *new_element;

	new_element = malloc(sizeof(stack_t));
	if(new_element == NULL)
	{
		exit(EXIT_FAILURE);
	}
	else
	{
		if (*stack == NULL)
		{
			new_element->n = n;
			new_element->next = NULL;
			*stack = new_element;
		}
		else
		{
			new_element->n = n;
			new_element->next = *stack;
			*stack = new_element;
		}
	}
}
