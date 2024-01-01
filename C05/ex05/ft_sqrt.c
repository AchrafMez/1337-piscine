/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:49:34 by amezioun          #+#    #+#             */
/*   Updated: 2023/11/01 23:21:52 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	t;

	t = nb;
	i = 2;
	while (t == 1 || i == 0)
		return (t);
	while (i * i <= t)
	{
		if (t == i * i)
			return (i);
		i++;
	}
	return (0);
}
