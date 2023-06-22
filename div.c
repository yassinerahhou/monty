#include "monty.h"

/**
 * _div - divides the secoegeg grrgr
 * @stack: Double pointer to tryyhrttette of the command in the source file
 *
 * Return: Nothing
 */
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *top, *second;
	int sum = 0;

	if (!(*stack) || !(*stack)->next)
		error_handler(stack, ERROR_DIV, line_number, NULL, NULL);

	if ((*stack)->n == 0)
		error_handler(stack, ERROR_DIV_BY_ZERO, line_number, NULL, NULL);

	top = *stack;
	second = (*stack)->next;
	sum = second->n / top->n;
	second->n = sum;

	top->next = second->next;
	free(top);
	*stack = second;
}
