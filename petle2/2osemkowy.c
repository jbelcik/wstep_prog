#include <stdio.h>

int main ()

{
  int k;
  int c;
  int licz;
  int cyfra;

  licz = 0;
  cyfra = 0;

  printf("\n\n   Podaj liczbe cyfr liczby zapisanej w systemie osemkowym,\n   ktora chcesz wyswietlic w systemie dziesietnym:\n   ");
  scanf("%d",&k);
  printf("\n   Podaj kolejno cyfry tej liczby\n   wciskajac enter po kazdej z nich:\n");

  while (licz < k) 
  {
    printf("   ");
    scanf("%d",&c);    
    cyfra = cyfra * 8 + c;
    licz = licz + 1;   
  }

  printf("\n   Podana liczba w zapisie dziesietnym wyglada tak:\n");
  printf("   %d\n\n\n",cyfra);

  return 0;
}
