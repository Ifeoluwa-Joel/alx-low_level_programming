#include <stdio.h>

/**
* main - prints English alphabets in lower and UPPER cases
* Return: 0 Always (SUCCESS)
*/

int main(void)
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
char alphabet1[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
int j;

for (i = 0; i < 26; i++)
{
putchar(alphabet[i]);
}

for (j = 0; j < 26; j++)
{
putchar(alphabet1[j]);
}

putchar('\n');

return (0);
}
