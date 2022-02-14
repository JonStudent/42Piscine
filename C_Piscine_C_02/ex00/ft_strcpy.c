/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbasilio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:20:24 by jbasilio          #+#    #+#             */
/*   Updated: 2022/01/25 22:49:31 by jbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "abcdefg";
	char	dst[] = "gfedcbaU";
 	
	printf("source:%s\ndestino:%s\n", src, dst);
	printf("ultimo caracter do destino:%c\n\n", dst[7]);
	printf("novo destino:%s\n", ft_strcpy(dst, src));
	printf("ultimo caracter do destino:%d\n", dst[7]);	
	return (0);
}
*/
