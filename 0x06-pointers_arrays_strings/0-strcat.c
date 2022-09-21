#include <stdio.h>
#include "main.h"

/**
* _strcat - concatenates two strings together
* @dest: parameter one
* @src: second parameter
* Return: a pointer to dest
*/

char *_strcat(char *dest, char *src)
{
int counter1 = 0;
int counter2 = 0;

while (*(dest + counter1) != '\0')
{
counter1++;
}

while (counter2 >= 0)
{
*(dest + counter1) = *(src + counter2);
if (*(src + counter2) == '\0')
break;
counter1++;
counter2++;
}

return (dest);
}
