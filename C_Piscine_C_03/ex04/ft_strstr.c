/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbasilio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 09:22:27 by jbasilio          #+#    #+#             */
/*   Updated: 2022/02/03 11:35:39 by jbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (!(to_find[0]))
		return (str);
	while (*str && to_find[i])
		if (!(to_find[i++] == *str++))
			i = 0;
	if (!(to_find[i]))
		return (str - i);
	return (0);
}
/*
int main(void)
{
	char hay[] = "hi my name is slime shady";
	char needle[] = "no";
	char *ptr;

	ptr = strstr(hay, needle);    
	printf("Destination: %s\n", hay);
	printf("source: %s\n\n", needle);
	printf("Real Function: %s\n", ptr);	        
    printf("my Function: %s\n", ft_strstr(hay, needle));
}
*/
