#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
	int		fd;
	char	*line;
	int		i;

	i = 1;
	fd = open("hola.txt", O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break;
		if (i == 20)
			break;
		printf("\n<<<<<>>>>>\n[%d]:%s<<<<<>>>>>\n", i, line);
		i++;
		free(line);
	}
	
	close(fd);
	return (0);
}
