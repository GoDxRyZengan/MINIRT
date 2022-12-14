#ifndef MINIRT_H
 #define MINIRT_H

 #include <stdio.h>

int	parsing(char *file)

typedef struct	s_ambient_l
{
	float	ratio;
	int		R;
	int		G;
	int		B;
}				t_ambient_l;

typedef struct	s_camera
{
	float	x;
	float	y;
	float	z;
	float	dir;
	int		fov;
}				t_camera;

typedef struct	s_light
{
	float	x;
	float	y;
	float	z;
	float	ratio;
	int		R;
	int		G;
	int		B;
}				t_light;

/*
	si le type = 1 : sphere
	si le type = 2 : plan
	si le type = 3 : cylindre
*/

typedef	struct	s_object
{
	int			type;
	float		x;
	float		y;
	float		z;
	float		dir_x;
	float		dir_y;
	float		dir_z;
	float		diameter;
	float		height;
	int			R;
	int			G;
	int			B;
	t_object	*next;
}				t_object;


typedef struct	s_data
{
	t_ambient_l	ambient_l;
	t_camera	camera;
	t_light		light;
	t_object	*obj;
}

#endif