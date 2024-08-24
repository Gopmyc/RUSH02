/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:16:02 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/24 16:35:58 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_rush02.h"

int	main(int argc, char **argv)
{
	int	converted;

	if (argc == 2)
	{
		if (!(ft_is_digit(argv[1])))
			return (0);
		converted = ft_convert_char(argv[1]);
		if (converted < 0)
		{
			write(1, "Error\n", (7 * sizeof(char)));
			return (0);
		}
	}
	else if (argc == 3)
	{
	
	}
	else
	{
		
	}
	return (0);
}
