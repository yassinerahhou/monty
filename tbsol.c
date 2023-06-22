#include "monty.h"

/**
  * select_op - Selects and returns thhef gfhf hdjgd
  * @s: Pointer to the op string
  *
  * Return: Pointer to the function cjljlr rjhkr jhjkhrgr
  */

void (*select_op(char *s))(stack_t **, unsigned int)
{
	int i;
	instruction_t ops[] = {
		{ "push", push },
		{ "pall", pall },
		{ "pint", pint },
		{ "swap", swap },
		{ "pop", pop },
		{ "add", add },
		{ "nop", nop },
		{ "sub", sub },
		{ "div", _div },
		{ "mul", mul },
		{ "mod", mod },
		{ "pchar", pchar },
		{ "pstr", pstr },
		{ NULL, NULL }
	};

	for (i = 0; ops[i].opcode; i++)
	{
		if (strcmp(s, ops[i].opcode) == 0)
			return (ops[i].f);
	}

	return (NULL);
}
