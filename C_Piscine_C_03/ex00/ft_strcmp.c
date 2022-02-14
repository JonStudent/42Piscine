/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbasilio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 01:15:58 by jbasilio          #+#    #+#             */
/*   Updated: 2022/01/27 16:49:31 by jbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = -1;
	while ((s1[++i]) && (s1[i] == s2[i]))
		;
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	s1[30] = "abcdef";
	char	s2[10] = " bcdef";

	printf("%d", ft_strcmp(s1, s2));
	return (0);
}
*/
