#include <stdio.h>

int main ()

{

  int i;
  int n;

  printf("\n\n   Podaj ilosc elementow tablicy:\n   ");
  scanf("%d",&n);

  float tab1[n];
  float tab2[n];
  int x = 0;
    
  printf("\n   Podaj kolejno wartosci elementow tablicy 1:\n");
    
  for (i = 0; i < n; i++)
  {
    printf("   ");
    scanf("%f",&tab1[i]);
  }

  printf("\n   Podaj kolejno wartosci elementow tablicy 2:\n");
         
  for (i = 0; i < n; i++) 
  {
    printf("   ");
    scanf("%f",&tab2[i]);
  }

  i = 0;

  do
  {
    if (tab1[i] == tab2[i]);
    else
    {
      if (tab1[i] < tab2[i])
      {
        x = 1;
      }
      else
      {
        x = 2;
      }
    }
    i++;
  }
  while (x == 0 && i < n);

  if (x == 1 && n != 0)
  {
    printf("\n   Tablica 1 poprzedza leksykograficznie tablice 2\n\n\n");
  }
  else
  {
    if (x == 2 && n != 0)
    {
      printf("\n   Tablica 2 poprzedza leksykograficznie tablice 1\n\n\n");
    }
    else
    {
      printf("\n   Te tablice sa rowne\n\n\n");
    }
  }

return 0;

}
