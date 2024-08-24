/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush02.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:16:07 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/24 15:52:07 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Fonctions autorisee : write, malloc, free, open, read, close */
#include <unistd.h>
#include <stdlib.h>

/* Declarations of functions utils.c */
int	ft_is_digit(char *str);
int	ft_get_sign(char *str);
int	ft_convert_char(char *str);
int	ft_strlen(char *str);