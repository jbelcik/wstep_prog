#include <stdio.h>

main ()

{
  
  int i;
  int n;

  printf("\n\n   Podaj ilosc elementow tablicy:\n   ");
  scanf("%d",&n);
  printf("\n");

  float tab1[n];
  float tab2[n];
  float x = 0;

  printf("   Podaj kolejno wartosci elementow tablicy 1:\n");

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

  for (i = 0; i < n; i++)
  {
    x = x + tab1[i] * tab2[i];
  }

  printf("\n   Iloczyn skalarny tych tablic wynosi:\n   %f\n\n\n",x);

  return 0;

}
