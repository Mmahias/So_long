/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahias <mmahias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:17:58 by mmahias           #+#    #+#             */
/*   Updated: 2021/10/15 12:18:58 by mmahias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_size_map(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (data->map.mapi[i] && data->map.mapi[i][0] != '\0')
		i++;
	data->map.size_map = i;
	i = 0;
	while (data->map.mapi[i][j] != '\0')
		j++;
	data->map.size_strs = j;
}

void	ft_size_rect(t_data *data)
{
	data->map.ry = data->window_height / data->map.size_map;
	data->map.rx = data->window_width / data->map.size_strs;
}
