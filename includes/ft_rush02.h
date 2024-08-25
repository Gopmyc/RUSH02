/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush02.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:16:07 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/25 20:42:38 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Fonctions autorisee : write, malloc, free, open, read, close */
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_dict_array
{
	char	*numbers;
	char	*letters;
}	t_dict_array;

#define DEFAULT_DICT "numbers.dict"
#define BUFFER_SIZE 1024

/* Declarations of functions utils.c */
int		ft_is_digit(char *str);
int		ft_get_sign(char *str);
int		ft_convert_char(char *str);
int		ft_strlen(char *str);
int		chartype(char let);

/* Declaration of functions base.c */
char	*ft_find_element(char i, struct s_dict_array *file);

/* Declaration of functions util2.c */
char	ft_int_to_char(int nb);

/* Declaration of functions errors.c */
void	ft_write_errors(int code);
int		ft_errors(char *args, int conv);

/* Declaration of functions dic_con.c */
int		ft_malloc(t_dict_array *s_out, int iter, int nb_num, int nb_name);
int		ft_dic_count2(int i_char, int file, t_dict_array *s_out, int i);
int		ft_dic_count(int s_in, t_dict_array *s_out, char *dic_name);
int		ft_dic(t_dict_array **s_out, char *dic_name);

/* Declaration of functions dic_con2.c */
int		ft_dic_check2(char i_char, int s_in, int nb_num, int sep);
int		ft_dic_check(int s_in);
void	ft_dic_fill2(char i_char, int i, int file, t_dict_array *s_out);
int		ft_dic_fill(int s_in, t_dict_array *s_out, char *dic_name);
