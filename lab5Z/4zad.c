#include <stdio.h>

int main()

{

  int z;
  int n;

  printf("\n\n   Podaj liczbe tablic (przynajmniej 2):\n   ");
  scanf("%d",&z);

  printf("\n   Podaj ilosc elementow tablic:\n   ");
  scanf("%d",&n);

  float tab1[n];
  float tabb[n];
  int i;
  int a;
  int j;
  int b = 1;
  int x = 0;

  printf("\n   Podaj kolejno wartosci elementow tablicy 1:\n");

  for (i = 0; i < n; i++)
  {
    printf("   ");
    scanf("%f",&tab1[i]);
  }

  for (j = z - 1; j > 0; j--)
  {
    a = z - j + 1;
    printf("\n   Podaj kolejno wartosci elementow tablicy %d:\n",a);

    for (i = 0; i < n; i++)
    {
      printf("   ");
      scanf("%f",&tabb[i]);
    }
       
    i = 0;

    do
    {
      if (tabb[i] > tab1[i])
      {
        b = a;
        for (x = 0; x < n; x++)
        {
          tabb[x] = tab1[x];
        }
      }
      i++;
    }
    while (x == 0 && i < n);
  }

  printf("\n   Najwieksza (leksykograficznie) tablica jest tablica %d\n\n\n",b);

  return 0;

}
