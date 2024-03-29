/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 19:59:19 by dstepane          #+#    #+#             */
/*   Updated: 2019/04/26 19:59:21 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fdf.h"

int			exit_fdf(t_fdf *f)
{
	del_map(f);
	mlx_destroy_window(f->mlx, f->win);
	mlx_destroy_image(f->mlx, f->img);
	free(f);
	exit(0);
	return (0);
}

void		fdf_error(char *msg)
{
	ft_printf("{red}{b}%s{0}\n", msg);
	exit(1);
}

void		del_map(t_fdf *f)
{
	int		y;

	y = 0;
	while (y < f->h)
		free(f->map[y++]);
	free(f->map[y]);
	free(f->map);
}
