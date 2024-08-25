/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dic_con.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladurand <ladurand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 20:23:07 by ladurand          #+#    #+#             */
/*   Updated: 2024/08/25 19:58:58 by ladurand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_rush02.h"

int	ft_malloc(t_dict_array *s_out, int iter, int nb_num, int nb_name)
{
	s_out[iter].numbers = (char *)malloc((nb_num + 1) * sizeof(char));
	s_out[iter].letters = (char *)malloc((nb_name + 1) * sizeof(char));
	if (s_out[iter].numbers == NULL || s_out[iter].letters == NULL)
	{
		while (iter >= 0)
		{
			free(s_out[iter].numbers);
			free(s_out[iter].letters);
			iter--;
		}
		free(s_out);
		return (0);
	}
	return (1);
}

int	ft_dic_count2(int i_char, int file, t_dict_array *s_out, int i)
{
	int	nb_num;
	int	nb_name;

	nb_num = 0;
	nb_name = 0;
	while (chartype(i_char) == 4)
	{
		read(file, &i_char, 1);
		nb_num++;
	}
	while (chartype(i_char) == 2 || chartype(i_char) == 3)
		read(file, &i_char, 1);
	while ((chartype(i_char) != 1))
	{
		read(file, &i_char, 1);
		nb_name++;
	}
	if (ft_malloc(s_out, i, nb_num, nb_name) == 0)
		return (0);
	return (1);
}

int	ft_dic_count(int s_in, t_dict_array *s_out, char *dic_name)
{
	int		i;
	char	i_char;
	int		file;

	i = 0;
	close(s_in);
	file = open(dic_name, O_RDONLY);
	if (file == -1)
		return (0);
	while (read(file, &i_char, 1) > 0)
	{
		if (ft_dic_count2(i_char, file, s_out, i) == 0)
			return (0);
		i++;
	}
	ft_dic_fill(file, s_out, dic_name);
	s_out[i].numbers = (char *)malloc(1 * sizeof(char));
	if (s_out[i].numbers == NULL)
		return (0);
	s_out[i].numbers[0] = '\0';
	return (1);
}

int	ft_dic(t_dict_array **s_out, char *dic_name)
{
	int	file;
	int	nb_lignes;

	file = open(dic_name, O_RDONLY);
	if (file == -1)
		return (0);
	nb_lignes = ft_dic_check(file);
	if (nb_lignes == 0)
		return (0);
	*s_out = malloc((nb_lignes + 1) * sizeof(t_dict_array));
	if (!s_out)
		return (0);
	ft_dic_count(file, *s_out, dic_name);
	if (close(file) == -1)
		return (0);
	return (1);
}

int	main(void)
{
	t_dict_array	*s_out;
	char			*dic_name;
	int				i;

	s_out = NULL;
	i = 0;
	dic_name = "numbers.dict";
	if (ft_dic(&s_out, dic_name) == 0)
		return (0);
	while (s_out[i].numbers[0] != '\0')
	{
		printf("\n%s", s_out[i].numbers);
		printf("\n%s", s_out[i].letters);
		i++;
	}
	while (s_out[i].numbers[0] != '\0')
	{
		write(1, "Bonjour", 7);
		free(s_out[i].numbers);
		free(s_out[i].letters);
		i++;
	}
	free(s_out);
}
