#include <stdlib.h>
#include "main.h"
#include <stdio.h>


/**
* main - this function multiplies argv contents
* @argc:  argument counter
* @argv: string arry containing all arguments
*
* Return: multiplied value of error if argc != 3
*/

int main(int argc, char *argv[])
{

if (argc != 3)
{
printf("Error\n");
return (1);
}

else
{
int mult = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mult);
}

return (0);
}
