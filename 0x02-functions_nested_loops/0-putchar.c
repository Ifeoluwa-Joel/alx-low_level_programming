#include "main.h"

/**
*main - prints "_putchar"
*
*Return: Always 0(SUCCESS)
*/

int main(void)
{
char ch[8] = "_putchar";
int i;

for (i = 0; i <= 7; i++)
{
_putchar(ch[i]);
}
_putchar('\n');

return (0);

}
