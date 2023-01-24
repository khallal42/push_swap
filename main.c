#include <mlx.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    void *mlx;
    void *win;
    void *img;

    int x;
    int y;
    int speed;
    int dir;
}   data;

int make_animation(data *data)
{
    int x;
    int y;
    mlx_clear_window(data->mlx, data->win);
    if (data->x < 0 || data->x >= 640 - 65)
        data->dir *= -1;
    data->x += data->speed * data->dir;
    data->img = mlx_xpm_file_to_image(data->mlx, "player1.xpm", &x, &y);
    mlx_put_image_to_window(data->mlx, data->win, data->img, data->x, data->y * 65);
    return (0);
}

// int main ()
// {
//     data data;

//     data.mlx = mlx_init();
//     data.win = mlx_new_window(data.mlx, 640, 480, "animation.exe");
   
//     data.speed = 1;
//     data.dir = 1;
//     data.y = 3;
//     data.x = 0;
//     mlx_loop_hook(data.mlx, make_animation, &data);
//     mlx_loop(data.mlx);
// }
