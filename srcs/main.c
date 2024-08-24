/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:16:02 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/24 15:53:24 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_rush02.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (!(ft_is_digit(argv[1])))
		{
			write(1, "Error\n", (7 * sizeof(char)));
			return (0);
		}
		else
		{
			
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
