/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:16:02 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/25 22:02:39 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_rush02.h"

int	main(int argc, char **argv)
{
	t_dict_array	*s_out;
	char			*element;

	s_out = NULL;
	if (argc == 2)
	{
		write(1, "a", sizeof(char));
		if (ft_dic(&s_out, DEFAULT_DICT) == 0)
			return (0);
		write(1, "b", sizeof(char));
		element = ft_find(s_out, argv[1]);
		printf("\n%s", element);
	}
	else if (argc == 3)
	{
		write(1, "c", sizeof(char));
		if (ft_dic(&s_out, argv[2]) == 0)
			return (0);
		element = ft_find(s_out, argv[1]);
		printf("\n%s", element);
	}
	else
	{
		write(1, "d", sizeof(char));
		ft_write_errors(0);
		return (1);
	}
	write(1, "e", sizeof(char));
	ft_free_all(s_out);
	free(s_out);
	return (0);
}
