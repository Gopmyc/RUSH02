/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:27:34 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/25 21:51:08 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_rush02.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static int	ft_num_len(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len = 1;
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_int_to_char(int nb)
{
	char	*str;
	int		len;
	int		sign;

	sign = 0;
	if (nb < 0)
		sign = 1;
	len = ft_num_len(nb);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (nb == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (sign)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (len-- > sign)
	{
		str[len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

int	chartype(char let)
{
	if (let < 31 || let == 127)
		return (1);
	else if (let == 58)
		return (2);
	else if (let == 32)
		return (3);
	else if (let > 47 && let < 58)
		return (4);
	return (0);
}
