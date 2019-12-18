/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 16:08:25 by jquince           #+#    #+#             */
/*   Updated: 2019/12/17 21:29:35 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

#include "minilibx_macos/mlx.h"
#include "libft/libft.h"
#include "get_next_line/get_next_line.h"

typedef struct		s_map
{
	int longueur;
    int largeur;
    int **matrice;

    void *mlx_ptr;
    void *window;
}					t_map;

void ft_reader(t_map *data);
#endif