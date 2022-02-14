/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbasilio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:16:46 by jbasilio          #+#    #+#             */
/*   Updated: 2022/02/04 00:46:17 by jbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(int argc, char **argv)
{
	int	j;
	int	i;

	i = 0;
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j])
			write(1, &argv[i][j++], 1);
		write(1, "\n", 1);
	}
}

void	ft_word_work(int argc, char **argv, int *done)
{
	int		i;
	int		j;
	char	*tp;

	*done = 1;
	i = 0;
	j = 0;
	while (i < argc - 1)
	{
		if (argv[i][j] == argv[i + 1][j])
		{
			j++;
			continue ;
		}
		if (argv[i][j] > argv[i + 1][j])
		{
			tp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = tp;
			*done = 0;
		}
		j = 0;
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		done;

	done = 0;
	while (!(done) && argc > 2)
	{
		ft_word_work(argc, argv, &done);
	}
	ft_print_params(argc, argv);
}
