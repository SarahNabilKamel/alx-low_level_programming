#include "main.h"

/**
 * create_file - creates a file.
 * @filame: file name.
 * @text_content: string.
 *
 * Return: 1 on success & -1 for failure.
 */
int create_file(const char *filame, char *text_content)
{
	int x, w, l = 0;
	
	if (filame == NULL)
		return (-1);
	
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	x = open(filame, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(x, text_content, l);

	if (x == -1 || w == -1)
		return (-1);

	close(x);

	return (1);
}

