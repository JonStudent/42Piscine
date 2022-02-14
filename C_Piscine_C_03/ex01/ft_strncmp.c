/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbasilio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:50:12 by jbasilio          #+#    #+#             */
/*   Updated: 2022/01/27 18:38:00 by jbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while ((s1[++i]) && (s1[i] == s2[i]) && (i < n -1))
		;
	if (!(n))
		return (0);
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	s1[30] = "abcdef";
	char	s2[10] = "AbcDef";
	unsigned	int	n;

	n = 0;
	printf("%d", ft_strncmp(s1, s2, n));
	return (0);
}
*/
