#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: print lowercase alphabet in reverse
 * Return: always 0 (success)
 */
int main(void)
{
	char letters;

	for (letters = 'z'; letters >= 'a'; letters--)
	{
		putchar(letters);
	}
	putchar('\n');
return (0);
}
