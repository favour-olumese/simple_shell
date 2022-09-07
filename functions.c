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
 * _strncmp - function that compares two strings at n bytes.
 * @s1: Pointer parameter.
 * @s2: Pointer parameter.
 * @n: Number of chars to compare.
 * Return: An integer.
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	int diff;

	i = 0;
	while (i < n)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			return (-1);
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			return (diff);
		}
		i++;
	}
	return (0);
}
