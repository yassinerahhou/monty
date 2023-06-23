#include "main.h"

/**
 * datastrc - Selects and returns the corresponding function pointer
 *            based on the given opcode.
 * @s: Pointer to the op string
 *
 * Return: Pointer to the function corresponding to the opcode,
 *         or NULL if no match is found.
 */

void (*datastrc(char *s))(stack_t **, unsigned int)
{
	int i;
	instruction_t ops[] = {
		{ "push", my_push },
		{ "pall", my_pall },
		{ "pint", my_ppint },
		{ "pop", fct_pop },
		{ "add", fct_add },
		{ "nop", fct_nop },
		{ "div", fct__div },
		{ "pchar", fct__pchar },
		{ NULL, NULL }
	};

	for (i = 0; ops[i].opcode; i++)
	{
		if (strcmp(s, ops[i].opcode) == 0)
			return (ops[i].f);
	}

	return (NULL);
}
