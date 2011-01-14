#include <stdio.h>

int main()
{
  int w, k, e, i, j, n, a = 0;
  
  printf("\n\n   Podaj wymiary 'x' i 'y' pierwszej macierzy:\n   x = ");
  scanf("%i", &w);
  printf("   y = ");
  scanf("%i", &k);
  printf("\n   Podaj wymiary 'f' i 'g' drugiej macierzy:\n   (zeby mnozenie bylo mozliwe musi zachodzic f = y)\n   f = %i\n   g = ", k);
  scanf("%i", &e);
  
  float mz1[w][k], mz2[k][e], mzw[w][e];
  
  printf("\n   Podaj kolejno elementy pierwszej macierzy:\n\n");
  for (i = 0; i < w; i++)
  {
    for (j = 0; j < k; j++)
    {
      printf("   Element %i,%i = ", i, j);
      scanf("%f", &mz1[i][j]);
    }
    printf("\n");
  }
  
  printf("\n   Podaj kolejno elementy drugiej macierzy:\n\n");
  for (i = 0; i < k; i++)
  {
    for (j = 0; j < e; j++)
    {
      printf("   Element %i,%i = ", i, j);
      scanf("%f", &mz2[i][j]);
    }
    printf("\n");
  }
  
  printf("\n   Wynikiem mnozenia tych macierzy jest macierz o elementach:\n\n");
  for (i = 0; i < w; i++)
  {
    for (j = 0; j < e; j++)
    {
      for (n = 0; n < k; n++)
      {
        a = mz1[i][n] * mz2[n][j] + a;
        mzw[i][j] = a;
      }
      a = 0;
    }
  }
  
  for (i = 0; i < w; i++)
  {
    for (j = 0; j < e; j++)
    {
      printf("   Element %i,%i = %3.5f\n", i, j, mzw[i][j]);
    }
    printf("\n");
  }

  printf("\n");

  return 0;
}
