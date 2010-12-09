#include <stdio.h>

int main()
{
  int a, b, i, e, j, t = 0, s = 0;

  printf("\n\n   Podaj ile cyfr bedzie miala pierwsza liczba:\n   ");
  scanf("%i", &a);
  printf("\n   Podaj ile cyfr bedzie miala druga liczba:\n   ");
  scanf("%i", &b);
   
  int tab1[a], tab2[a], tabx[a];
  
  for (i = 0; i < a; i++)
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
  
  int w, h;
 
  printf("\n   Wynik odejmowania tych liczb to:\n   ");
  for (i = 0; i < a; i++)
  {
    e = tab1[i] - tab2[i];
    if (e < 0)
    {  
      for (j = i + 1; tab1[j] == 0; j++);
      if (j > i + 1)
      {
        for (t = j - 1; t > i; t--) tab1[t] = tab1[t] + 9;
      }
      tab1[j]--;
      e = tab1[i] - tab2[i] + 10;
    }
    tabx[i] = e;
  }
  
  for (i = a - 1; tabx[i] == 0; i--) s++;
  a = a - s;
  
  for (i = a - 1; i >= 0; i--) printf("%i", tabx[i]);
  
  printf("\n\n\n");
  
  return 0;
}
