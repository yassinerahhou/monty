#include "monty.h"

/**
 * push - pushes an element tokjkj handli jhjdhn hhihihi hhiz
 * @stack: khjiohjie hihie uehhiki iuioàoiujoehe ujoije
 * @nbr: Line number ofjjejol jjoe eiehie
 * Return: always zero
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
