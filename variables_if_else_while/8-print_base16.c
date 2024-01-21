#include <stdio.h>
/**
* main - entry point
* Return: 0
*/
int main(void)
{
char digit;
char letter;
for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
}
for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
