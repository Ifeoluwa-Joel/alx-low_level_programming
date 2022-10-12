#include "function_pointers.h"
void print_name(char *name, void (*f)(char *));


/**
* print_name - prints a name
* @name: input name
* @f: function pointer used as argument
*
* Return: no return.
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
