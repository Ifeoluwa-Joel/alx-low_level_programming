#include <stdio.h>
#include "main.h"

/**
*  _strncpy - copies strings
* @dest: destination parameter
* @src: source parameter
* @n: limit variable
* Return: Pointer to dest always
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';

return (dest);

}
