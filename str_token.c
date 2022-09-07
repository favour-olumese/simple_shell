#include "main.h"

#define ARGS_BUFSIZE 64

/**
 * stringToTokens - Split a string into tokens where delimters are found.
 * @user_input: String to be tokenized.
 * Return: Array of strings.
 */
char **stringToTokens(char *user_input)
{
	int bufsize = ARGS_BUFSIZE, token_position = 0;
	char *token, *delim = " \t\r\a\n";
	char **token_array = malloc(bufsize * sizeof(char *));

	if (!token_array)
	{
		perror("shs: Allocation error\n");
		exit(EXIT_FAILURE);
	}

	/* Insert each token into token_array */
	token = strtok(user_input, delim);
	while(token != NULL)
	{
		token_array[token_position] = token;
		token_position++;

		token = strtok(NULL, delim);
	}
	token_array[token_position] = NULL;
	return (token_array);
}
