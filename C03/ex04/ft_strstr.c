/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:20:41 by amezioun          #+#    #+#             */
/*   Updated: 2023/11/02 12:51:49 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (to_find[i] != '\0')
		i++;
	if (i == 0)
		return (str);
	j = 0;
	while (str[j] != '\0')
	{
		k = 0;
		while (str[j + k] == to_find[k])
		{
			k++;
			if (k == i)
				return (&str[j]);
		}
		j++;
	}
	return (0);
}
