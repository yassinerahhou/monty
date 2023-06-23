#include "main.h"

void p_rr_k(char *smyto);

/**
 * open_f - a function that opens a file and checks its existens
 * @smyto: a file name or a path
 * Return: The opened file
 */

FILE *open_f(char *smyto)
{
	FILE *file = NULL;

	if (access(smyto, R_OK) == -1)
		p_rr_k(smyto);

	file = fopen(smyto, "r");

	if (!file)
		p_rr_k(smyto);

	return (file);
}
/**
 * p_rr_k - prints an error message and exits the program
 * @smyto: a file name
 * Return: Nothing
 */

void p_rr_k(char *smyto)
{

	fprintf(stderr, "Error: Can't open file %s\n", smyto);
	exit(EXIT_FAILURE);
}
