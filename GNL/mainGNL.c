#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
	int		fd;
	char	*line;
	int		i;

	i = 0;
	fd = open("hola.txt", O_RDONLY);
	while (1)
	{
		
		line = get_next_line(fd);
		if (line == NULL)
			break;
		printf("[%d]: %s\n\n\n", i, line);
		free(line);
		i++;
		
	}
	close(fd);
	return (0);
}
