#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	if (filename == NULL)
	{
		return -1;
	}

	int fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return -1;
	}

	if (text_content != NULL)
	{
		int len = 0;
		while (text_content[len])
		{
			len++;
		}
		int w = write(fd, text_content, len);
		if (w == -1)
		{
			close(fd);
			return -1;
		}
	}

	close(fd);
	return 1;
}
