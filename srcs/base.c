/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:57:27 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/25 20:42:57 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_rush02.h"

char	*ft_find_element(char i, struct s_dict_array *file)
{
	int long	index;

	index = 0;
	while (file[index].letters != NULL)
	{
		if (ft_strcmp(file[index].numbers, i))
			break ;
		index++;
	}
	retrun(file[index].letters);
}
