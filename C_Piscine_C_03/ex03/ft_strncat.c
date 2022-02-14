/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbasilio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 00:13:41 by jbasilio          #+#    #+#             */
/*   Updated: 2022/01/28 00:29:36 by jbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*tmp;

	tmp = dest--;
	while (*++dest)
		;
	while (*src++ && nb--)
		*dest++ = *(src - 1);
	*dest = '\0';
	return (tmp);
}
/*
int	main(void)
{
	unsigned int	nb;
	char	src[] = "abc";
	char	dest[]= "012";
	nb = 1;

	write(1, dest, 4);
	write(1, "\n", 1);
	write(1, ft_strncat(dest, src, nb), 10);
 	return (0);
}
*/
