/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbasilio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:39:54 by jbasilio          #+#    #+#             */
/*   Updated: 2022/01/28 00:12:42 by jbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*tmp;

	tmp = dest--;
	while (*++dest)
		;
	while (*src++)
		*dest++ = *(src - 1);
	*dest = '\0';
	return (tmp);
}
/*
int	main(void)
{
	char	src[] = "abc";
	char	dest[]= "012";
	
	write(1, dest, 4);
	write(1, "\n", 1);
	write(1, ft_strcat(dest, src), 10);
 	return (0);
}
*/
