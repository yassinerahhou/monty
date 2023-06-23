#include "main.h"

/**
 *fct_ pop - removes the up element of the stack
 *
 * @stack: Double pointer to the stgbggbgb joor ack
 * @ly_numbrs_rr: Line he commant
 *
 * Return: Nothing
 */
void fct_pop(stack_t **stack, unsigned int ly_numbrs_rr)
{
	stack_t *intem;

	if (*stack == NULL)
		fix_err01(stack, ERROR_POP, ly_numbrs_rr, NULL, NULL);

	intem = *stack;
	*stack = (*stack)->next;
	free(intem);
}
