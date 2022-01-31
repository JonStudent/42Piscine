#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{

	char	str1[3] = "ola";
	char	str2[] = "alo";
	printf("%p\n", str1);
	printf("%p\n", str2);
	write(1, str1, 6);
	write(1, "\n", 1);
	write(1, str2, 6);
	write(1, "\n", 1);
}
