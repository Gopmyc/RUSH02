/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:16:02 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/25 20:42:20 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_rush02.h"

int	main(int argc, char **argv)
{
	t_dict_array	*s_out;
	int				converted;
	int				file_line_size;

	s_out = NULL;
	if (argc == 2)
	{
		converted = ft_convert_char(argv[1]);
		file_line_size = count_lines(DEFAULT_DICT);
		if (ft_dic(&s_out, DEFAULT_DICT) == 0)
			return (0);
		// implementer la logiquer pour parcourire le dictionnaire par default et renvoyer la valeur
	}
	else if (argc == 3)
	{
		if (ft_dic(&s_out, argv[2]) == 0)
			return (0);
		// implementer la logique pour parcourire le dictionnaire passer en argument et renvoyer la valeur
	}
	else
	{
		ft_write_errors(0);
		return (1);
	}
	free(s_out);
	return (0);
}
