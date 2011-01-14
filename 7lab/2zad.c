#include <stdio.h>

int main()
{
  int x, i, j ,p;

  printf("\n\n   Podaj liczbe elementow tablicy (przynajmniej 2):\n   ");
  scanf("%i", &x);
  
  float tab[x];
  
  printf("\n   Podaj kolejno elementy tablicy:\n");
  for (i = 0; i < x; i++)
  {
    printf("   ");
    scanf("%f", &tab[i]);
  }
  
  printf("\n   Posortowaina tablica wyglada tak:\n");
  for (i = 1; i < x; i++)
  {
    for (j = i; j > 0; j--)
    {
      if (tab[j - 1] > tab[j])
      {
        p = tab[j];
        tab[j] = tab[j - 1];
        tab[j - 1] = p;
      }
    }
  }
  
  for (i = 0; i < x; i++)
  {
    printf("   %f\n", tab[i]);
  }

  printf("\n\n");
  
  return 0;
}
