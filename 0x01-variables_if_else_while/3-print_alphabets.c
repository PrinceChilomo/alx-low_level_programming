#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
for (ch = 'Z' ; ch <= 'Z' ; ch++)
{
	putchar(ch);
}
putchat('\n');
return (0);
}
