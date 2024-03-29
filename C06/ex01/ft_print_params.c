/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:37:23 by amezioun          #+#    #+#             */
/*   Updated: 2023/10/29 18:20:55 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	j = 1;
	while (av[j] != '\0' && j < ac)
	{
		write(1, &av[j][i], 1);
		i++;
		if (av[j][i] == '\0')
		{
			i = 0;
			write(1, "\n", 1);
			j++;
		}
	}
}
