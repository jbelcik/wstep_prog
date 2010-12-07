#include <stdio.h>

int main()

{

  int licz_przeb;
  int licz_natur;

  licz_przeb = 0;
  licz_natur = 21;

  while (licz_przeb < 50)
    {
      licz_natur = licz_natur + 7;
      printf("%d\n",licz_natur);
      licz_przeb = licz_przeb + 1;
    }

  if (licz_natur % 7 == 0)
    {
      printf("Wynik jest OK\n");
    }
  else
    {
      printf("Wynik jest zly\n");
    }

return 0;

}
