#include <stdio.h>
#include "main.h"

/**
* swap_int - swaps the value in two locations using pointers
* @a: first value
* @b: second value
*
* Return: Void
*/

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
