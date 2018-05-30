#include "get_next_line.h"

int main(int ac, char **av)
{
    int fd;
    char *line;
    printf("putain de ta race");
    // *line = NULL;
    if (ac != 2)
        return (0);
    fd = open(av[1], O_RDONLY);
    // get_next_line(fd, line);
    printf("on rentre ds gnl");
    
    while (get_next_line(fd, &line) > 0)
    {
        printf("line : %s\n", line);
        free(line);
    }
	
	close(fd);
    return (0);
}