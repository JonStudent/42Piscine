/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbasilio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:27:09 by jbasilio          #+#    #+#             */
/*   Updated: 2022/02/03 23:24:32 by jbasilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	while (--argc > 0)
	{
		while (*argv[argc])
			write(1, argv[argc]++, 1);
		write(1, "\n", 1);
	}
}