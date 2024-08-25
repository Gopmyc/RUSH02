/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 20:01:01 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/25 20:08:18 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_rush02.h"

void	ft_write_errors(int code)
{
	if (code == 1)
	{
		write(1, "Error\n", (7 * sizeof(char)));
	}
	else if (code == 2)
	{
		write(1, "Dict Error\n", (12 * sizeof(char)));
	}
}

int	ft_errors(char *args, int conv)
{
	if (!(ft_is_digit(args[1])))
		return (0);
	if (conv < 0)
	{
		ft_write_errors(1);
		return (0);
	}
}
