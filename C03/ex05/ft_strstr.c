/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amezioun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:45:44 by amezioun          #+#    #+#             */
/*   Updated: 2023/10/25 15:58:07 by amezioun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
/*
char			*ft_strstr(char *str, char *to_find);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
unsigned int	ft_strlen(char *str);
void			ft_putchar(char c);

int	main(void)
{
	char	haystack[] = "the world is em empty without achraf";
	char	needle[] = "emp";

	ft_strstr(haystack, needle);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (str)
	{
		while (to_find[i])
		{
			if (ft_strncmp(str, to_find, ft_strlen(to_find)) == 0)
			{
				while (str[k])
				{
					ft_putchar(str[k]);
					k++;
				}
			}
			i++;
		}
		str++;
	}
	return (str);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
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
