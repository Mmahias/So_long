/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahias <mmahias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:16:09 by mmahias           #+#    #+#             */
/*   Updated: 2021/10/14 18:16:11 by mmahias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int	get_texture(t_data *data, t_img *img, char *path)
{
	int	width;
	int	height;

	img->mlx_img = mlx_xpm_file_to_image(data->mlx_ptr, path, &width, &height);
	if (img->mlx_img == NULL)
	{
		printf("Error: textures is invalid\n");
		ft_exit(data);
	}
	img->addr = mlx_get_data_addr(img->mlx_img, &img->bpp, \
	&img->line_len, &img->endian);
	return (0);
}

static int	ft_texture_x32(t_data *data)
{
	get_texture(data, &data->img_wall, "./textures/wall1.xpm");
	get_texture(data, &data->img_bg, "./textures/bg2.xpm");
	get_texture(data, &data->img_playr, "./textures/sr.xpm");
	get_texture(data, &data->img_playl, "./textures/sl.xpm");
	get_texture(data, &data->img_playu, "./textures/sd.xpm");
	get_texture(data, &data->img_playd, "./textures/su.xpm");
	get_texture(data, &data->img_coll, "./textures/coll2.xpm");
	get_texture(data, &data->img_exit_close, "./textures/ex1.xpm");
	get_texture(data, &data->img_exit_open, "./textures/ex2.xpm");
	return (0);
}

static int	ft_texture_x16(t_data *data)
{
	get_texture(data, &data->img_wall, "./textures/wall1_16x.xpm");
	get_texture(data, &data->img_bg, "./textures/bg2_16x.xpm");
	get_texture(data, &data->img_playr, "./textures/sr_16x.xpm");
	get_texture(data, &data->img_playl, "./textures/sl_16x.xpm");
	get_texture(data, &data->img_playu, "./textures/sd_16x.xpm");
	get_texture(data, &data->img_playd, "./textures/su_16x.xpm");
	get_texture(data, &data->img_coll, "./textures/coll_16x.xpm");
	get_texture(data, &data->img_exit_close, "./textures/ex1_16x.xpm");
	get_texture(data, &data->img_exit_open, "./textures/ex2_16x.xpm");
	return (0);
}

void	ft_get_texture(t_data *data)
{
	if (data->map.size_pix == 32)
		ft_texture_x32(data);
	else if (data->map.size_pix == 16)
		ft_texture_x16(data);
}
