


#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	*tmpdest;
	int	i;

	i = 0;
	tmpdest = src;
	while (*src++)
		while (i < size - 1)
			if (!(dest[i++]))
				dest[i - 1] = *(src - 1);

}
