#include "monty.h"

/**
 * push - pushes an element to the stack of the ode
 * @stack: jfhfh hfghfuy sidgyrgfj gfhgu 
 * @nbr: gr hihie ihhei
 * Return: Nothing
 */

void push(stack_t **stack, unsigned int nbr)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (!new_node)
		error_handler(stack, ERROR_MALLOC, 0, NULL, NULL);

	new_node->n = nbr;
	if (*stack)
	{
		new_node->next = *stack;
		new_node->prev = (*stack)->prev;
		(*stack)->prev = new_node;
		*stack = new_node;
		return;
	}

	new_node->next = *stack;
	new_node->prev = NULL;
	*stack = new_node;
}
