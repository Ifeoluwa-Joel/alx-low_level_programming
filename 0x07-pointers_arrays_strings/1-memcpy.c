#include <stdio.h>
#include "main.h"

/**
* _memcpy - copies n bytes from memory area src to memory area dest
* @dest: pointer where we will copy n bytes to
* @src: pointer where we will copy n bytes from
* @n: number of bites to copy
*
* Return: A pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)

dest[i] = src[i];

return (dest);

}
