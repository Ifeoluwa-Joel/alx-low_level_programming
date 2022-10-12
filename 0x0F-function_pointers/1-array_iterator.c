#include "function_pointer.h"

/**
* array_iterator - executes a function passed as a
* parameter on each element of @array.
* @array: input integer array.
* @size: size of the array.
* @action: pointer to the function.
*
* Return: no return.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array && action)
for (i = 0; i < size; i++)
action(array[i]);
}