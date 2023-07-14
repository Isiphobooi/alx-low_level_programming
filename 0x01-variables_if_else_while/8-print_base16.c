#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *        only use the putchar function twice
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
