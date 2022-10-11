#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 * @argc - main argument counter
 * @argv - main argument vector
 *
 * Return: the name of C file
 */

int main(void)
{

char *filename = __FILE__;

printf("%s\n", filename);
return (0);
}