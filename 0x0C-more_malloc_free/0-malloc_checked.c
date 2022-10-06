#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - allocates memory using malloc()
* @b: size of memory allocated
*
* Return: A pointer  to the allocated memory (SUCESS)
*         98 (FAILED)
*/

void *malloc_checked(unsigned int b)
{

int *p;

p = malloc(b);

if (p == NULL)
{
exit(98);
}

return (p);
}
