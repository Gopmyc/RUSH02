/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:57:27 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/25 22:32:21 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_rush02.h"

char	*ft_find(t_dict_array *s_out, char *value)
{
	long	i;

	i = 0;
	while (s_out[i].numbers[0] != '\0')
	{
		if (ft_compare_string(value, s_out[i].numbers) == 1)
			break ;
		i++;
	}
	return (s_out[i].letters);
}

void	ft_free_all(t_dict_array *s_out)
{
	long	i;

	i = 0;
	while (s_out[i].numbers[0] != '\0')
	{
		free(s_out[i].numbers);
		free(s_out[i].letters);
		i++;
	}
}
