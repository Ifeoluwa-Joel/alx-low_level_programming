#include "main.h"
#include "limits.h"
#include "stdlib.h"

/**
* create_array - function that creates an array
* @size: size of the array
* @c: character parameter
*
* Return: A pointer to the array of characters
*/

char *create_array(unsigned int size, char c)
{
char *cr;
unsigned int i;

if (size == 0)
return (NULL);

cr = malloc(sizeof(char) * size);

if (cr == NULL)
return (NULL);

for (i = 0; i < size; i++)
cr[i] = c;

return (cr);
}
