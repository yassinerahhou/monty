#include "monty.h"

/**
 * swap - swaps the top twothhj
 *
 * @stack: Double pffth
 * @line_number: Line number offhbt
 *
 * Return: Nothing
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *top, *second;

	if (!(*stack) || !(*stack)->next)
		error_handler(stack, ERROR_SWAP, line_number, NULL, NULL);

	top = *stack;
	second = (*stack)->next;

	top->next = second->next;
	second->next = top;

	*stack = second;
}
