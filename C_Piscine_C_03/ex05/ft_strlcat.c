/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbasilio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 09:18:58 by jbasilio          #+#    #+#             */
/*   Updated: 2022/02/03 11:47:40 by jbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;	
	unsigned int	src_len;

	src_len = 0;
	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	while (src[src_len])
		src_len++;
	if (size <= dest_len)
		return (src_len + size);
	src_len += dest_len;
	while (*src && (size > dest_len + 1))
		dest[dest_len++] = *src++;
	dest[dest_len] = '\0';
	return (src_len);
}
/*
int	main(void)
{
	int	n;
	char	src[] = "jelly";
	char	dest[] = "i love ";

	n = 8;
	printf("%s\n", src);
  	printf("%s\n", dest);
  	printf("Real function: %lu\n", strlcat(dest, src, n));
  	printf("me function: %u \n\n", ft_strlcat(dest, src, n));
  	printf("%s\n", src);
  	printf("%s\n", dest);
}
*/
