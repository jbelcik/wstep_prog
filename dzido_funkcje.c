#include <stdio.h>
#include <math.h>
#define pi 3.14

void blad(char komunikat[])
{
  printf("!!!  BLAD  ---  %s  !!!\n", komunikat);
}

float prostokat(float x, float y)
{
  if (x > 0 && y > 0) return x*y;
  else
  {
    blad("Zle wartosci");
    return 0;
  }
}

float deltoid(float x, float y)
{
  int s;
  if (x > 0 && y > 0) return x*y/2;
  else
  {
    blad("Zle wartosci");
    return 0;
  }
}

float stozek(float x, float y)
{
  if (x > 0 && y > 0) return pi*x*x*y/3;
  else
  {
    blad("Zle wartosci");
    return 0;
  }
}

void parzysta(int x)
{
  if (x%2 == 0) printf("Ta liczba jest parzysta\n");
  else printf("Ta liczba jest nieparzysta\n");
}

void zakres(float x)
{
  if (x >= -sqrt(2) && x <= sqrt(2)) printf("Nalezy\n");
  else printf("Nie nalezy\n");
}

void pierwsza(int x)
{
  int i, s = 0;
  if (x <= 2) s = 1;
  else
  {
    for (i = 2; i < x; i++)
    {
      if (x%i == 0)
      {
        s = 1;
        break;
      }
    }
  }
  if (s == 1) printf("Ta liczba nie jest pierwsza\n");
  else printf("Ta liczba jest pierwsza\n");
}

void rok(int x)
{
  if (x%4 == 0 && x%100 != 0 || x%400 == 0) printf("Ten rok jest przestepny\n");
  else printf("Ten rok nie jest przestepny\n");
}

int sumafor(int x, int y)
{
  int z, i, s = 0;
  if (x > y)
  {
    z = x;
    x = y;
    y = z;
  }
  for (i = x; i <= y; i++) s = s + i;
  return s;
}

int sumawhile(int x, int y)
{
  int z, i = x, s = 0;
  if (x > y)
  {
    z = x;
    x = y;
    y = z;
    i = x;
  }
  while (i <= y)
  {
    s = s + i;
    i++;
  }
  return s;
}

int silnia(int x)
{
  if (x < 0)
  {
    blad("Nie mozna policzyc silni z liczby ujemnej");
    return 0;
  }
  else
  {
    if (x == 0 || x == 1) return 1;
    else return x*silnia(x - 1);
  }
}

int doskonala(int x)
{
  int i, s = 0;
  for (i = 1; i < x; i++)
  {
    if (x%i == 0) s = s + i;
  }
  if (x > 0 && s == x) return 1;
  else return 0;
}

void odwrotnie(int x)
{
  int j, cyfra;
  if (x < 0) j = x*-1;
  else j = x;
  while (j > 0)
  {
    cyfra = j%10;
    printf("%i", cyfra);
    j = j/10;
  }
  if (x < 0) printf("-");
  printf("\n");
}

void gwiazdki(int a, int b)
{
  int i, j;
  for (i = 1; i <= a; i++)
  {
    for (j = 1; j <= b; j++)
    {
      if (i == 1 || i == a || j == 1 || j == b) printf("*");
      else printf(" ");
    }
    printf("\n");
  }
}

int main()
{
  float a, b;
  int i;

  scanf("%f", &a);
  scanf("%f", &b);

  printf("%f\n", prostokat(a, b));
  printf("%f\n", deltoid(a, b));
  printf("%f\n", stozek(a, b));
  parzysta(a);
  zakres(a);
  pierwsza(a);
  rok(a);
  printf("%i\n", sumafor(11, 50));
  printf("%i\n", sumawhile(11, 50));
  for (i = 0; i < 10; i++) printf("silnia(%i) = %i\n", i, silnia(i));
  if (doskonala(a) == 1) printf("Ta liczba jest doskonala\n");
  else printf("Ta liczba nie jest doskonala\n");
  for (i = 6; i < 1000; i++)
  {
    if (doskonala(i) == 1) printf("doskonala - %i\n", i);
  }
  odwrotnie(a);
  gwiazdki(a, b);
}
