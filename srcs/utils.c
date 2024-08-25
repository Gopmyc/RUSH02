/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:36:00 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/25 22:17:15 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_rush02.h"

int	ft_is_digit(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] == '+' || str[i] == '+'
				|| (str[i] >= '0' && str[i] <= '9')))
			return (0);
		i++;
	}
	return (1);
}

int	ft_get_sign(char *str)
{
	int	i;
	int	sign;

	sign = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '+')
				sign = 1;
			else
				sign = -sign;
			break ;
		}
		i++;
	}
	return (sign);
}

int	ft_convert_char(char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = ft_get_sign(str);
	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - '0');
		}
		i++;
	}
	return ((result * sign));
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int		diff;
	int		i;

	diff = 0;
	i = 0;
	while (s1[i] && s2[i])
	{
		diff = s1[i] - s2[i];
		if (diff != 0)
			return (diff);
		i++;
	}
	return (s1[i] - s2[i]);
}
