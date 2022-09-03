#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: character to print
*
* Return:on sucess 0
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
