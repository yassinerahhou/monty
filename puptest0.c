#include "monty.h"

/**
 * usage_error - Prints usage error message.
 *
 * This function is responsible for printing an error message indicating the
 * correct usage of the program. It is typically called when the program is
 * invoked without the required command line argument specifying the input file.
 *
 * Return:
 *   - EXIT_FAILURE: Indicates a failure in the program execution.
 */
int usage_error(void)
{
    fprintf(stderr, "USAGE: monty file\n");
    return EXIT_FAILURE;
}

/**
 * malloc_error - Prints malloc error message.
 *
 * This function is responsible for printing an error message indicating a
 * failure in memory allocation using malloc. It is typically called when
 * malloc fails to allocate memory.
 *
 * Return:
 *   - EXIT_FAILURE: Indicates a failure in the program execution.
 */
int malloc_error(void)
{
    fprintf(stderr, "Error: malloc failed\n");
    return EXIT_FAILURE;
}

/**
 * f_open_error - Prints file opening error message with filename.
 * @filename: Name of the file that failed to open.
 *
 * This function is responsible for printing an error message indicating a
 * failure in opening a file. It is typically called when the program fails
 * to open the specified file.
 *
 * Return:
 *   - EXIT_FAILURE: Indicates a failure in the program execution.
 */
int f_open_error(char *filename)
{
    fprintf(stderr, "Error: Can't open file %s\n", filename);
    return EXIT_FAILURE;
}

/**
 * unknown_op_error - Prints unknown instruction error message.
 * @opcode: Opcode where the error occurred.
 * @line_number: Line number in the Monty bytecode file where the error occurred.
 *
 * This function is responsible for printing an error message indicating that
 * an unknown instruction was encountered. It is typically called when the
 * program encounters an unrecognized opcode in the Monty bytecode file.
 *
 * Return:
 *   - EXIT_FAILURE: Indicates a failure in the program execution.
 */
int unknown_op_error(char *opcode, unsigned int line_number)
{
    fprintf(stderr, "Error: Unknown instruction %s at line %u\n", opcode, line_number);
    return EXIT_FAILURE;
}

int main(void)
{
    

    return 0;
}

