/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:57:27 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/24 19:58:20 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_rush02.h"

char	*ft_find_element(int i, struct s_dict_array *file)
{
	int long	index;

	index = 0;
	while (file[index].letters != NULL)
	{
		if (file[index].numbers == i)
			break ;
		index++;
	}
	retrun(file[index].letters);
}

int	count_lines(const char *filename)
{
	int		file;
	int		i;
	int		line_count;
	ssize_t	bytes_read;
	char	buffer[BUFFER_SIZE];

	file = open(filename, O_RDONLY);
	if (file < 0)
		return (-1);
	line_count = 0;
	while (1)
	{
		bytes_read = read(file, buffer, BUFFER_SIZE);
		if (bytes_read <= 0)
			break ;
		i = 0;
		while (i < bytes_read)
			if (buffer[i++] == '\n')
				line_count++;
	}
	close(file);
	if (bytes_read < 0)
		return (-1);
	return (line_count);
}
