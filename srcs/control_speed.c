/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control_speed.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwon <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 18:08:20 by jwon              #+#    #+#             */
/*   Updated: 2020/08/04 14:13:48 by jwon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

void			game_speed_up(t_game *game)
{
	if (game->speed_mov < 0.18)
		game->speed_mov += 0.01;
	if (game->speed_rot < 0.18)
		game->speed_rot += 0.01;
}

void			game_speed_down(t_game *game)
{
	if (game->speed_mov > 0.03)
		game->speed_mov -= 0.01;
	if (game->speed_rot > 0.03)
		game->speed_rot -= 0.01;
}
