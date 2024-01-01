/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:50:47 by amezioun          #+#    #+#             */
/*   Updated: 2023/10/27 21:42:10 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	countminus;
	int	number;

	countminus = 0;
	while ((*str != '\0' && *str == ' ') || (*str != '\0' && *str >= 9
			&& *str <= 13))
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			countminus++;
		str++;
	}
	number = 0;
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		number = number * 10 + (*str - '0');
		str++;
	}
	if (!((countminus % 2) == 0))
		return (-number);
	return (number);
}
