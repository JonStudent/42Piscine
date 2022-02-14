/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbasilio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 21:03:50 by jbasilio          #+#    #+#             */
/*   Updated: 2022/02/02 09:32:54 by jbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i++] = *src++;
		if (!(*(src - 1)))
			src--;
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "abc";
	char	dst[] = "12345";
	unsigned int	n;

	n = 3;

	printf("source:%s\ndestino:%s\n", src, dst);
	printf("novo destino:%s\n", ft_strncpy(dst, src, n));	
	printf("strncpy check:%s\n", strncpy(dst, src, n));	
	return (0);
}
*/
