#include "main.h"

/**
 * exe_ly - executes the operation code as function
 * @nrdheaad: Double pointer to the stack
 * @str_mcode: operation code to exec
 * @data: the data next to push
 * @ly_numbrs_rr: The line number of the op in the bytecode file
 * Return: 0 if success, 1 if not
 */

int exe_ly(stack_t **nrdheaad, char *str_mcode,
		char *data, unsigned int ly_numbrs_rr)
{
	void (*operation)(stack_t **, unsigned int);

	operation = datastrc(str_mcode);
	if (operation)
	{
		if (strcmp(str_mcode, "push") == 0)
		{
			if (is_valid_data(data) == ERROR_PUSH)
				return (ERROR_PUSH);
			operation(nrdheaad, atoi(data));
		}
		else
			operation(nrdheaad, ly_numbrs_rr);

		return (0);
	}
	return (ERROR_INVALID_INSTRC);
}
