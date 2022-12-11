#include<stdio.h>
/**
 * main - C program that prints all single numbers of base 10 starting from 0
 * using putchar 
 * return: Always 0
 */
int main(void)
{
	int n;
	for(n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar("\n");
	return 0;
}
