#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* main - prints the name of the program
* @argc: argument counter of type int
* @argv: argument string which contains user's commands
*
* Return: the Program name
*/

int main(int argc, char *argv[])
{
if (argc > 0)
printf("%s\n", argv[0]);

return (0);

}
