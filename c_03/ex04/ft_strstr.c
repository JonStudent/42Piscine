#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	i = 0;
	--str;
	while (*++str && to_find[i])
		if (!(to_find[i++] == *str))
			i = 0;
	if (!(to_find[0]))
		return (str);
	if (!(to_find[i]))
		return (str - i);
	//printf("%c\n", *str);
	return (0);

}
/*
int main(void)
{
	char	*str = "hi my name is clime shady";
	char	*to_find = "slime";
	char	*ptr;

	ptr = strstr(str, to_find);
	printf("%s\n", ptr);
        printf("Function: %s\n\n", ft_strstr(str, to_find));
}
*/
int main(void)
{
	char *largestring = "hi my name is slime shady";
	char *smallstring = "slime  ";
	char *ptr;		  
	ptr = strstr(largestring, smallstring);    
//	printf("Large string: %s\n\n", largestring);
//	printf("Small string: %s\n\n", smallstring);
	printf("Command: %s \n", ptr);	        
        printf("Function: %s\n\n", ft_strstr(largestring, smallstring));
}

