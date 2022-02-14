/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbasilio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:26:35 by jbasilio          #+#    #+#             */
/*   Updated: 2022/01/23 19:42:13 by jbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_it(char *comb, int n)
{
	write(1, comb, n);
	if (!(comb[0] == ':' - n))
		write(1, ", ", 2);
}

void	set_array(int *i, char *comb, int n)
{
	while (*i < n)
	{
		comb[*i] = *i + '0';
		*i += 1;
	}
	*i -= 1;
}

void	ft_print_combn(int n)
{
	char	comb[9];
	int		i;

	i = 0;
	set_array(&i, comb, n);
	while (comb[0] <= ':' - n)
	{
		while (comb[i] <= '9')
		{
			print_it(comb, n);
			comb[i]++;
		}
		if (!(i == 0))
		{
			i--;
			while (comb[i] == comb[i + 1] - 1)
				i--;
			comb[i]++;
			while (i < n - 1)
			{
				i++;
				comb[i] = comb[i - 1] + 1;
			}
		}	
	}
}
