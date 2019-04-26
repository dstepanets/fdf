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

void		del_map(t_fdf *f)
{
	int		y;

	y = 0;
	while (y < f->h)
		free(f->map[y++]);
	free(f->map[y]);
	free(f->map);
}