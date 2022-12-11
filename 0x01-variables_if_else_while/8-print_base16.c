#include<stdio.h>
/** 
 * main - C program that prints all the number of base 16 in lowercase, followed by new line. you can only use putchar
 * using putchar
 * return : 0
 */
int main(void)
{
	int n;
	char ch;
	for(n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for(ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return 0;
}
