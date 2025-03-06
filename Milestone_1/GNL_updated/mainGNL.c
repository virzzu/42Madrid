#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
	int		fd;
	char	*line;

	fd = open("hola.txt", O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break;
		if (line)
			printf("%s", line);
		free(line);
	}
	
	close(fd);
	return (0);
}
