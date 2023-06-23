#include "main.h"

/**
 * _div - divides the dwn up element of the stack
 *	by the up element of the stack
 *
 * @stack: Double pointer to the stack
 * @ly_numbrs_rr: Line number of the command in the source file
 *
 * Return: Nothing
 */
void fct__div(stack_t **stack, unsigned int ly_numbrs_rr)
{
	stack_t *up, *dwn;
	int sum = 0;

	if (!(*stack) || !(*stack)->next)
		fix_err01(stack, ERROR_DIV, ly_numbrs_rr, NULL, NULL);

	if ((*stack)->n == 0)
		fix_err01(stack, ERROR_DIV_BY_ZERO, ly_numbrs_rr, NULL, NULL);

	up = *stack;
	dwn = (*stack)->next;
	sum = dwn->n / up->n;
	dwn->n = sum;

	up->next = dwn->next;
	free(up);
	*stack = dwn;
}
