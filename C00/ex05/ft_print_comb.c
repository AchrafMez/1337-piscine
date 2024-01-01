/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:38:24 by amezioun          #+#    #+#             */
/*   Updated: 2023/10/12 12:16:56 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	numb0;
	int	numb1;
	int	numb2;

	numb0 = 0;
	while (numb0 <= '7')
	{
		numb1 = numb0 + 1;
		while (numb1 <= '8')
		{
			numb2 = numb1 + 1;
			while (numb2 <= 9)
			{
				ft_putchar (numb0 + '0');
				ft_putchar (numb1 + '0');
				ft_putchar (numb2 + '0');
				if (numb0 != 7)
					write (1, ", ", 2);
				numb2++;
			}
			numb1++;
		}
		numb0++;
	}
}
