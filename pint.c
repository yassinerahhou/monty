#include "main.h"

/**
 * pint - prints the value at the up of the stack, followed by a new line
 *
 * @stack: Double pointer to the stack
 * @ly_numbrs_rr: Line number of the command in the source file
 *
 * Return: Nothing
 */
void my_ppint(stack_t **stack, unsigned int ly_numbrs_rr)
{
if (stack == NULL || *stack == NULL)
{
	fix_err01(stack, ERROR_PINT, ly_numbrs_rr, NULL, NULL);
}
printf("%d\n", (*stack)->n);
}
