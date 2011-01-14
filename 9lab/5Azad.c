#include<stdio.h>
#include<math.h>

#define dol_t 0
#define gora_t 20
#define krok_t 0.05
#define alpha 1
#define szer 50
#define wys 40
#define dol_x -10
#define gora_x 15
#define dol_y -15
#define gora_y 20

float funkcja_x (float t)
{
  return t*cos(alpha*t);
}


float  funkcja_y (float t)
{
  return t*sin(alpha*t);
}


char  rysunek[szer][wys];


void  rysuj(int x, int y, char znak)
{
  if (0 <= x && x < szer && 0 <= y && y < wys)
  {
    rysunek[x][y] = znak;
  }
}


int  interpoluj (float x, float a, float b, int n)
{
  return  floor((x - a)*n/(b - a));
}


int  f_x (float t)
{
  return  interpoluj(funkcja_x(t), dol_x, gora_x, szer);
}

int  f_y (float t)
{
  return  interpoluj(funkcja_y(t), dol_y, gora_y, wys);
}


main () {
  int  x, y, poziom, pion;
  float t;

  printf("\nWYKRES FUNKCJI:\n\n ");

  for (x = 0; x < szer; x++)
  {
    for (y = 0; y < wys; y++)
    {
      rysuj(x, y, ' ');
    }
  }

  pion = interpoluj(0, dol_x, gora_x, szer);
  for(y = 0; y < wys; y = y + 1)
  {
    rysuj(pion, y, '|');
  }

  poziom = interpoluj(0, dol_y, gora_y, wys);
  for(x = 0; x < szer; x = x + 1)
  {
    rysuj(x, poziom, '-');
  }

  rysuj(pion, poziom, '+');

  for (t = dol_t; t < gora_t; t = t + krok_t)
  { 
    rysuj(f_x(t), f_y(t), '*');
  }

  for (y = wys - 1; y >= 0; y--)
  {
    for (x = 0; x < szer; x++)
    {
      printf("%c", rysunek[x][y]);
    }
    printf("\n ");
  }

  printf("\n\n");
}
