/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anradix <anradix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:59:31 by anradix           #+#    #+#             */
/*   Updated: 2020/02/25 22:18:46 by anradix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct s_player
{
	float x;
    float y;
    float width;
    float height;
    int turnDirection; // -1 for left, +1 for right
    int walkDirection; // -1 for back, +1 for front
    float rotationAngle;
    float walkSpeed;
    float turnSpeed;
}	t_player;

typedef struct s_mlx
{
	void	*id;
	void	*win;
	void	*img_id;
	int		*img;
	int		endian;
	int		bpp;
	int		size_line;
}	t_mlx;

typedef struct s_struct
{
	t_mlx		mlx;
	t_player	player;
}	t_struct;

#endif