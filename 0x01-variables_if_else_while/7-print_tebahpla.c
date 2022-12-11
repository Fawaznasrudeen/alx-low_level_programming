#include<stdio.h>
/**
 * main - c program that prints the alphabet in reverse, followed by a new line
 * using putchar 
 * return: Always 0
 */
int main(void)
{
	int ch;
	for(ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar("\n");
	return 0;
}
