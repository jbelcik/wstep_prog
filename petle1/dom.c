#include <stdio.h> 

int main()

{
  int licz_przeb;
  int licz_natur;

  licz_przeb = 0;
  licz_natur = 49;

  while (licz_przeb < 200)
  {  
    printf("%d\n",licz_natur);
    licz_natur = licz_natur + 7;
    licz_przeb = licz_przeb + 1;
  }

  return 0;
}
