#include "main.h"

/**
* _isupper - decides if a character is upper or lowercase
* @c: input character
* Return: 0 if character is lower case or 1 if character is uppercase
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else if (c >= 97 && c <= 122)
{
return (0);
}
}
