#ifndef WOLF_H
#define WOLF_H
#include <mlx.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
# define WIDTH 900
# define HEIGHT 900
#define mapWidth 29
#define mapHeight 24


typedef struct s_wolf
{
  double cameraX;
  double rayPosX;
  double rayPosY;
  double rayDirX;
  double rayDirY;
  double posX, posY;  //x and y start position
  double dirX, dirY; //initial direction vector
  double planeX, planeY; //the 2d raycaster version of camera plane

  double time; //time of current frame
  double oldTime; //time

}t_wolf;

typedef struct                                                  s_img
{
  void                    *mlx;
  void                    *win;
  unsigned long   img_color;
  char                    *data;
  void                    *img_ptr;
  int                             sizeline;
  int                             bpp;
  int                             x;
  int                             y;
  int                             endian;
  void                    *mlx_ptr;
}                                                                               t_img;

typedef struct s_struct
{
  int qetat;
  int eetat;
  int shiftetat;
  int rightetat;
  int leftetat;
  int upetat;
  int downetat;
  void *mlx;
  void *win;
  t_img                   *img;
  t_wolf *wolf;
  int worldMap[mapWidth][mapHeight];
}               t_struct;
#endif
