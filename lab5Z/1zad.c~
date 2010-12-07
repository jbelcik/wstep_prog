#include <stdio.h>

int main()

{

  int x = 0;
  int y = 0;
  int z = 0;
  int n;
  int i;
  
  printf("\n\n   Podaj ilosc elemenotw tablicy:\n   ");
  scanf("%d",&n);
  printf("\n");

  float tab[n];
  
  printf("   Podaj kolejno wartosci elementow tablicy:\n");

  for (i = 1; i <= n; i++)
  {
    printf("   ");
    scanf("%f",&tab[i]);
  }

  for (i = 1; i <= n; i++)
  {
    if (tab[i] == 0)
    {
      x = x + 1;
    }
    else
    {
      if (tab[i] < 0)
      {
        y = y + 1;
      }
      else
      {
        z = z + 1;
      }
    }
  }

  printf("\n   W tej tablicy jest %d liczb ujemnych,%d zer i %d liczb dodatnich\n\n\n",y,x,z);

  return 0;

}

