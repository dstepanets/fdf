/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 15:41:13 by dstepane          #+#    #+#             */
/*   Updated: 2019/04/27 15:41:15 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fdf.h"

void			print_map(t_fdf *f)
{
	int y = 0, x;

	printf("y.x.z:\n");
	while (y < f->h)
	{
		x = 0;
		while (x < f->w)
		{
//			printf("%d.%d.%d |", f->map[y][x].y, f->map[y][x].x, f->map[y][x].z);
			printf("%x |", f->map[y][x].color);
			x++;
		}
		printf("\n");
		y++;
	}
}
