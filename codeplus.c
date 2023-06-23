#include "main.h"

/**
 * add - adds the a and b to the code
 *
 * @stack: Double fhfhg ffhgfh.
 * @ly_numbrs_rr: Line nfhfhhfhfh
 * Return: always zero
 */
void fct_add(stack_t **stack, unsigned int ly_numbrs_rr)
{
	stack_t *up, *dwn;
	int sum = 0;

	if (!(*stack) || !(*stack)->next)
		fix_err01(stack, ERROR_ADD, ly_numbrs_rr, NULL, NULL);
	up = *stack;
	dwn = (*stack)->next;
	sum = up->n + dwn->n;
	dwn->n = sum;

	up->next = dwn->next;
	free(up);
	*stack = dwn;
}
