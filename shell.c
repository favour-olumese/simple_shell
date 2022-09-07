#include "main.h"

/**
* main - main simple shell.
* @argc: number of arguments.
* @argv: list of command line arguments.
* Return: Always 0, -1 on error.
*/
int main(int argc, char **argv)
{
	int response;
	char **tokens;
	size_t bufsize = BUFSIZ;
	int isPipe = 0;
	char *buffer;
	ssize_t getline_num;

	if (argc >= 2)
	{
		if (execve(argv[1], argv, NULL) == -1)
		{
			perror("Error");
			exit(-1);
		}
		return (0);
	}

	buffer = (char *)malloc(bufsize * sizeof(char));
	if (buffer == NULL)
	{
		perror("Error: Unable to allocate buffer");
		exit (1);
	}
	do {
		if (isatty(fileno(stdin)))
		{
			isPipe = 1;
			_puts("$ ");
		}
		getline_num = getline(&buffer, &bufsize, stdin);

		if (getline_num == -1)
		{
			exit(EXIT_FAILURE);
		}
	buffer[_strlen(buffer) - 1] = '\0';
	tokens = stringToTokens(buffer);
	response = execute(tokens);

	} while (isPipe && response != -1);

	return (0);
}
