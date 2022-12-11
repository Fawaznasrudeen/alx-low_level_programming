#include<stdio.h>
/** 
 * main - C program that prints all possible combinations of single-digit numbers, follow by new line
 * only putchar is allow
 * return 0;
 */
int main(void)
{
	int n;
	for(n = 48; n < 58; n++)
	{
		putchar(n);
		if(n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return 0;
}
