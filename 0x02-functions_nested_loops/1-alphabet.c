#include<stdio.h>
/** 
 * main - write a function that prints the alphabet in lowercase, follow by newline
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	
}
