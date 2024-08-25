/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dic_con2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladurand <ladurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 19:51:13 by ladurand          #+#    #+#             */
/*   Updated: 2024/08/25 21:00:09 by ladurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_rush02.h"

int	ft_dic_check2(char i_char, int s_in, int nb_num, int sep)
{
	int	nb_name;
	int	is_empty;

	is_empty = 0;
	nb_name = 0;
	if (i_char == '\n')
		is_empty = 1;
	while (i_char == ' ')
		read(s_in, &i_char, 1);
	if (chartype(i_char) == 2)
		sep++;
	read(s_in, &i_char, 1);
	while (i_char == 32)
		read(s_in, &i_char, 1);
	while (chartype(i_char) != 1)
	{
		read(s_in, &i_char, 1);
		nb_name++;
	}
	if (i_char == '\n')
		sep++;
	if ((nb_num <= 0 || sep != 2 || nb_name <= 0) && is_empty == 0)
		return (0);
	return (1);
}

int	ft_dic_check(int s_in)
{
	int		nb_num;
	int		sep;
	int		nb_lignes;
	char	i_char;

	nb_lignes = 0;
	while (read(s_in, &i_char, 1) > 0)
	{
		nb_num = 0;
		sep = 0;
		while (chartype(i_char) == 4)
		{
			read(s_in, &i_char, 1);
			nb_num++;
		}
		if (ft_dic_check2(i_char, s_in, nb_num, sep) == 0)
			return (0);
		nb_lignes++;
	}
	return (nb_lignes);
}

void	ft_dic_fill2(char i_char, int i, int file, t_dict_array *s_out)
{
	int	nb_num;
	int	nb_name;

	nb_num = 0;
	nb_name = 0;
	while (chartype(i_char) == 4)
	{
		s_out[i].numbers[nb_num++] = i_char;
		read(file, &i_char, 1);
	}
	while (chartype(i_char) == 2 || chartype(i_char) == 3)
		read(file, &i_char, 1);
	while (chartype(i_char) != 1)
	{
		s_out[i].letters[nb_name++] = i_char;
		read(file, &i_char, 1);
	}
	s_out[i].numbers[nb_num] = '\0';
	s_out[i].letters[nb_name] = '\0';
}

int	ft_dic_fill(int s_in, t_dict_array *s_out, char *dic_name)
{
	char	i_char;
	int		i;
	int		file;

	i = 0;
	close(s_in);
	file = open(dic_name, O_RDONLY);
	if (file == -1)
		return (0);
	while (read(file, &i_char, 1) > 0)
	{
		if (i_char != '\n')
		{
			ft_dic_fill2(i_char, i, file, s_out);
			i++;
		}
	}
	return (1);
}
