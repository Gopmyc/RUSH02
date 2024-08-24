/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:16:02 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/24 20:04:25 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_rush02.h"

int	main(int argc, char **argv)
{
	int	converted;
	int	file_line_size;

	if (argc == 2)
	{
		converted = ft_convert_char(argv[1]);
		
		file_line_size = count_lines(DEFAULT_DICT);
		// implementer la logiquer pour parcourire le dictionnaire par default et renvoyer la valeur
	}
	else if (argc == 3)
	{
		file_line_size = count_lines(argv[2]);
		// implementer la logique pour parcourire le dictionnaire passer en argument et renvoyer la valeur
	}
	else
	{
		// message d'erreur
	}
	return (0);
}
