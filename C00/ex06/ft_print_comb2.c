/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 20:31:01 by amezioun          #+#    #+#             */
/*   Updated: 2023/10/13 21:19:04 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	comb0;
	int	comb1;

	comb0 = 0;
	while (comb0 <= 98)
	{
		comb1 = comb0 + 1;
		while (comb1 <= 99)
		{
			ft_putchar((comb0) / 10 + '0');
			ft_putchar((comb0) % 10 + '0');
			write(1, " ", 1);
			ft_putchar((comb1) / 10 + '0');
			ft_putchar((comb1) % 10 + '0');
			if (!(comb0 == 98 && comb1 == 99))
				write(1, ", ", 2);
			comb1++;
		}
		comb0++;
	}
}
