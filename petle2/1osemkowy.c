#include <stdio.h>

int main()

{
  int n;
  int cyfra;

  printf("\n\n   Podaj liczbe w systemie dziesietnym,\n   ktora chcesz wyswietlic w systemie osemkowym:\n   ");
  scanf("%d",&n);
  printf("\n   Ta liczba wyglada tak (czytana od konca):\n   ");

  while(n > 0)
  { 
    cyfra = n % 8;
    printf("%d",cyfra);
    n = n - cyfra;
    n = n / 8; 
    cyfra = 0;
  }

  printf("   \n\n\n");

  return 0;
}
