/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 23:27:31 by rchbouki          #+#    #+#             */
/*   Updated: 2024/01/26 20:12:22 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINE_H
# define DEFINE_H

# define RED			"\033[1;31m"
# define GREEN			"\033[1;32m"
# define YELLOW			"\033[1;33m"
# define BLUE			"\033[1;34m"
# define WHITE			"\033[1;37m"
# define EOC			"\033[0;0m"

# define WIDTH			1280
# define HEIGHT			720
# define ESC			65307
# define KEY_W			119
# define KEY_A			97
# define KEY_S			115
# define KEY_D			100
# define KEY_LEFT		65361
# define KEY_RIGHT		65363
# define MOVE_SPEED		0.04
# define ROT_SPEED		0.03
# define M_PI			3.141592653689793238462643383279502884197169399375105820
# define NUM_KEYS		256
# define MAP_SIZE		150
# define TEXTURE_NORTH	0
# define TEXTURE_SOUTH	1
# define TEXTURE_WEST	2
# define TEXTURE_EAST	3

# include "../minilibx-linux/mlx.h"
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <math.h>
# include <X11/Xlib.h>

#endif