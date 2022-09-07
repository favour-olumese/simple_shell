#include "main.h"

/**
* _strlen - find the length of a string
* @s: pointer to the string to check
* Return: void
*/
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
* _strcpy -  copies the string pointed to by src
* @dest: char type string
* @src: char type string
* Description: Copy the string pointed to by poi
* nter to the buffer
* Return: Pointer to `dest`
*/
char *_strcpy(char *dest, const char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}

/**
 * _strcmp - function that compares two strings.
 * @s1: Pointer parameter.
 * @s2: Pointer parameter.
 * Return: An integer.
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int diff;

	if (s1 == s2)
	{
		diff = 0;
	}

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
	}
	return (diff);
}
