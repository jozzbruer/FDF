/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_reader.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 19:07:45 by jquince           #+#    #+#             */
/*   Updated: 2019/12/17 22:21:35 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int ft_get_long(char *file)
{
    char *line;
    int fd;
    int lon;

    fd = open(file, O_RDONLY,0);
    lon = 0;
    while(get_next_line(fd,&line))
    {
        lon++;
        //free(line)
        ft_strdel(line);
    }
    close(fd);
    return (lon)
}

int ft_get_larg(char *file)
{
    char *line;
    int fd;
    int larg;

    fd = open(file, O_RDONLY,0);
    get_next_line(fd, &line);
    larg = ft_countw(line, ' ');
    free(line)
    close(fd);
    return (lon)
}

void ft_reader(t_map *data)
{
    data->longueur = ft_get_long(file);
    data->largeur = ft_get_larg(file);
}
