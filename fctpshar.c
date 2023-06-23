#include "main.h"

/**
 *fct__pchar - The integer store
 * @stack: Double pointer to th stack
 * @ly_numbrs_rr: Line numbsource uiyhioyi uguigtu
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
}
