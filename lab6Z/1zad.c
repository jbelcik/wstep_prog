#include <stdio.h>

int main()
{
  int a, b, g, i, e, t = 0;
  
  printf("\n\n   Podaj ile cyfr bedzie miala pierwsza liczba:\n   ");
  scanf("%i", &a);
  printf("\n   Podaj ile cyfr bedzie miala druga liczba:\n   ");
  scanf("%i", &b);
  
  if (a > b) g = a + 1;
  else g = b + 1;
  
  int tab1[g], tab2[g], tabx[g];
  
  for (i = 0; i < g; i++)
  {
    tab1[i] = 0;
    tab2[i] = 0;
  }
  
  printf("\n   Podaj pierwsza liczbe:\n   ");
  for (i = a - 1; i >= 0; i--)
  {
    scanf("%1i", &tab1[i]);
  }
  
  printf("\n   Podaj druga liczbe:\n   ");
  for (i = b - 1; i >= 0; i--)
  {
    scanf("%1i", &tab2[i]);
  }
  
  printf("\n   Wynik dodawania tych liczb to:\n   ");
  for (i = 0; i < g; i++)
  {
    e = tab1[i] + tab2[i] + t;
    if (e / 10 != 0)
    {
      t = e / 10;
      e = e % 10;
    }
    else t = 0;
    tabx[i] = e;
  }
  
  if (tabx[g - 1] == 0) g = g - 1;

  for (i = g - 1; i >= 0; i--) printf("%i", tabx[i]);
  
  printf("\n\n\n");
  
  return 0;
}
