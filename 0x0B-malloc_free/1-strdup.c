#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory
*           which contains a copy of the string given as a parameter.
* @str: the initial string passed as parameter
*
* Return: A pointer to the new string
*
*/


char *_strdup(char *str)
{
char *str1;
unsigned int i, j;

if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
;

str1 = (char *)malloc(sizeof(char) * (i + 1));
if (str1 == NULL)
return (NULL);

for (j = 0; j <= i; j++)
str1[j] = str[j];
return (str1);
}
