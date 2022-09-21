#include <stdio.h>
#include "main.h"

/**
*strncat - concatenates two strings with n bytes from string 2
*@dest: parameter one
*@src: parametter two
*@n:number of bytes from src
*Return: pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
int counter1 = 0;
int counter2 = 0;

while (*(dest + counter1) != '\0')
{
counter1++;
}

while (counter2 < n)
{
*(dest + counter1) = *(src + counter2);

if (*(src + counter2) == '\0')
break;
counter1++;
counter2++;

}
return (dest);
}
