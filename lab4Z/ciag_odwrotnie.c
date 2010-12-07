#include <stdio.h>

int main()

{

  int liczba[1000];
  int x = -1;

  printf("\n\n   Podaj ciag liczb (-1 konczy podawanie liczb):\n");

  do
    {
      x = x + 1;
      printf("   ");
      scanf("%d",&liczba[x]);
    }
  while(liczba[x] != -1);

  printf("\n");
  printf("   Podany ciag wyswietlony odwrotnie wyglada tak:\n");

  while (x > 0)
    {
      x = x - 1;
      printf("   %d\n",liczba[x]);
    }

  printf("\n\n");

  return 0;

}
