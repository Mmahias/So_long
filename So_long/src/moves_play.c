/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_play.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahias <mmahias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:11:49 by mmahias           #+#    #+#             */
/*   Updated: 2021/10/14 18:11:50 by mmahias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	move_right(t_data *data)
{
	data->player.x += data->map.rx;
	data->play_dir = 'r';
	data->player.mooves++;
}

void	move_left(t_data *data)
{
	data->player.x -= data->map.rx;
	data->play_dir = 'l';
	data->player.mooves++;
}

void	move_up(t_data *data)
{
	data->player.y += data->map.ry;
	data->play_dir = 'u';
	data->player.mooves++;
}

void	move_down(t_data *data)
{
	data->player.y -= data->map.ry;
	data->play_dir = 'd';
	data->player.mooves++;
}
