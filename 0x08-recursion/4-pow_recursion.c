#include <stdio.h>
#include "main.h"

/**
* _pow_recursion - returns the value of @x raised to power of @y
* @x: integer parameter
* @y: ingteger parameter
*
* Return: -1 if y < 0 OR value of @x ^ @y
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}

else if (y == 0)
{
return (1);
}

else
{
return (x * _pow_recursion(x, y - 1));
}
}
