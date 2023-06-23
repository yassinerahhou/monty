#define _POSIX_C_SOURCE 200809L

#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: number of args passed to the program
 * @argv: array of arguments passed
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    stack_t *nrdheaad = NULL;
    FILE *file;
    char *line = NULL, *str_mcode = NULL, *data = NULL, *sdalams = " \t\n";
    unsigned int line_num = 0;
    size_t line_len = 0;
    int status = 0;

    fix_args(argc);
    file = open_f(argv[1]);

    while (getline(&line, &line_len, file) != -1)
    {
        line_num++;
        str_mcode = strtok(line, sdalams);
        if (str_mcode)
        {
            if (str_mcode[0] == '#')
                continue;

            data = strtok(NULL, sdalams);
            status = exe_ly(&nrdheaad, str_mcode, data, line_num);
            if (status != 0)
            {
                fclose(file);
                fix_err01(&nrdheaad, status, line_num, line, str_mcode);
            }
        }
    }
    free_stack(&nrdheaad);
    free(line);
    fclose(file);
    return (0);
}

