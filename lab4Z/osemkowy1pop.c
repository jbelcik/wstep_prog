#include <stdio.h>

int main()

{

  int n;
  int cyfra;
  int liczba[1000];
  int x = 0;

  printf("\n\n   Podaj liczbe w systemie dziesietnym,\n   ktora chcesz wyswietlic w systemie osemkowym:\n   ");
  scanf("%d",&n);
  printf("\n   Ta liczba wyglada tak:\n");

  while(n > 0)
    {
      cyfra = n % 8;
      liczba[x] = cyfra;
      x = x + 1;
      n = n - cyfra;
      n = n / 8;
      cyfra = 0;
    }

  printf("   ");
  while(x > 0)
    {
      x = x - 1;
      printf("%d",liczba[x]);
    }

  printf("\n\n\n");

return 0;

}
