#include <stdio.h>

/**
* main - prints English alphabets in lower caps
* Return: 0 Always (SUCCESS)
*/

int main(void)
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
int i;

for (i = 0; i < 26; i++)
{
putchar(alphabet[i]);
}
putchar("\n");

}
