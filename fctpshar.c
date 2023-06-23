#include "main.h"

/**
 * pchar - The integer stored at the up of the stack is treated
 *	as the ascii value of the character to be printed
 *
 * @stack: Double pointer to the stack
 * @ly_numbrs_rr: Line number of the command in the source file
 *
 * Return: Nothing
 */
void fct__pchar(stack_t **stack, unsigned int ly_numbrs_rr)
{
	int n;

	if (!(*stack))
		fix_err01(stack, ERROR_PCHAR, ly_numbrs_rr, NULL, NULL);

	n = (*stack)->n;

	if (n < 0 || n > 127)
		fix_err01(stack, ERROR_ASCII, ly_numbrs_rr, NULL, NULL);

	printf("%c\n", n);
