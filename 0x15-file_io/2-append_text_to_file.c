#include "main.h"

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: filename
 * @text_content: text to append
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int append_file, i, wr_stat;

	if (filename == NULL)
		return (-1);
	append_file = open(filename, O_WRONLY | O_APPEND);
	if (append_file == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (i = 0; text_content[i]; i++)
		;
	wr_stat = write(append_file, text_content, i);
	close(append_file);
	return (wr_stat == -1 ? -1 : 1);
}
