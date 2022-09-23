#include <main.h>

/**
 * *_strcat - concatenates @scr to @dest
 * @scr: the source string to append to @dest
 * @dest: the destination string to be concatenated upon
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; scr[index]; index++)
		dest[dest_len++] = scr[index];
	return (dest)

}
