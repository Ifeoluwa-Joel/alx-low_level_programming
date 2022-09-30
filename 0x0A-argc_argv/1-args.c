#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the number of args
* @argc: argument counter
* @argv: argument vector that stores arguments
*
* Return: numbers of arguments excluding -o file
*/

int main(int argc, char *argv[] __attribute__((unused)))
{

int noOfArgs = argc - 1;
printf("%d\n", noOfArgs);

return (0);

}
