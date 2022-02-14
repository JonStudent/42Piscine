/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbasilio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:37:45 by jbasilio          #+#    #+#             */
/*   Updated: 2022/02/03 14:10:43 by jbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	while (src[len])
		len++;
	i = -1;
	if (size)
	{
		while (++i < (size - 1) && src[i])
			dest[i] = src[i];
		dest[i] = '\0';
	}
	return (len);
}
/*
int	main(void)
{
	char	src[] =  "cake";
	char	dest[] = "cokie are great";
	unsigned int	size;

	size = 5;
	printf("\nsource:%s\ndestination:%s\n", src, dest);
	printf("ft_out:%u\n", ft_strlcpy(dest, src, size));
	printf("strlcpy_out:%lu\n", strlcpy(dest, src, size));
	printf("%s\n", dest);;
}
*/
