/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 18:54:34 by scilla            #+#    #+#             */
/*   Updated: 2020/12/09 18:58:27 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int p;

	i = argc - 1;
	while (i > 0)
	{
		p = 0;
		while (argv[i][p])
			write(1, &argv[i][p++], 1);
		i--;
		write(1, "\n", 1);
	}
	return (0);
}