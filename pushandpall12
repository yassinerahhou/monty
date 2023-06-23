#include "main.h"

/**
 * push - pushes an element to the stack
 * @stack: Double pointer to the stack
 * @nbr: Line number of the command in the source file
 * Return: Nothing
 */

void my_push(stack_t **stack, unsigned int nbr)
{
	stack_t *nivy = malloc(sizeof(stack_t));

	if (!nivy)
		fix_err01(stack, ERROR_MALLOC, 0, NULL, NULL);

	nivy->n = nbr;
	if (*stack)
	{
		nivy->next = *stack;
		nivy->prev = (*stack)->prev;
		(*stack)->prev = nivy;
		*stack = nivy;
		return;
	}

	nivy->next = *stack;
	nivy->prev = NULL;
	*stack = nivy;
}
