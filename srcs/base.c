/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:57:27 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/25 21:41:54 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_rush02.h"

char	*ft_find(t_dict_array *s_out, char *conv)
{
	long	i;

	i = 0;
	while (s_out[i].numbers[0] != '\0')
	{
		if (ft_strcmp(conv, s_out[i].numbers) == 0)
			break ;
		i++;
	}
	if (s_out[i].numbers[0] == '\0')
		return (NULL);
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
