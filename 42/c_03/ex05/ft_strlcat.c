


#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	
	i = 0;
	j = -1;
	while (dest[i])//Get len of dest.
		i++;
	while (src[++j])//count src len
		if (size - 1 - (i + j) > 0)//if theres space
			*(dest++ + i) = src[j];//assign the value in src to dest
	*dest = '\0';//terminating the result
	if (size < i)
		return (size + j);
	return (i + j);
}

int	main(void)
{
	char	src[] = "cake";
	char	dest[] = "i love ";
	int	result;

	result =  ft_strlcat(dest, src, 12);
	printf("%s\n", dest);
	printf("%d\n", result);
	return (0);
}
