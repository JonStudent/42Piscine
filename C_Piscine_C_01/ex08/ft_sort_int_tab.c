/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbasilio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:00:30 by jbasilio          #+#    #+#             */
/*   Updated: 2022/01/26 22:16:18 by jbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	done;
	int	tmp;
	int	i;

	done = 0;
	while (!done)
	{
		done = 1;
		i = 0;
		while (i++ < size - 1)
		{
			if (tab[i] < tab[i - 1])
			{
				tmp = tab[i];
				tab[i] = tab[i - 1];
				tab[i - 1] = tmp;
				done = 0;
			}
		}
	}
}

int 	main()
{
	int	i;
	int	tab[] = {5,7,6,1,4,3,8};

	i = -1;
	ft_sort_int_tab(tab, 7);
	while (tab[++i])
		printf("%d\n", tab[i]);
}
