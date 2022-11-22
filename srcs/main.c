#include "../includes/miniRT.h"

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 2)
	{
		printf("Error\nBad number of arguments\n");
		return (0);
	}
	init();
	if (parsing(argv[1]) == -1)
		return (0);
	return (0);
}