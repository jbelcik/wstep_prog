#include <stdio.h>

int main()

{

  char klucz[27];
  int licz[1000];
  int n = 0;
  int i = 0;
  
  klucz[0] = 's';  klucz[ 9] = 'w';  klucz[18] = 'k';
  klucz[1] = 'i';  klucz[10] = 'y';  klucz[19] = 'r';
  klucz[2] = 'n';  klucz[11] = 'c';  klucz[20] = 'j';
  klucz[3] = 'h';  klucz[12] = ' ';  klucz[21] = 'u';
  klucz[4] = 'm';  klucz[13] = 'b';  klucz[22] = 'd';
  klucz[5] = 't';  klucz[14] = 'q';  klucz[23] = 'g';
  klucz[6] = 'p';  klucz[15] = 'x';  klucz[24] = 'o';
  klucz[7] = 'a';  klucz[16] = 'e';  klucz[25] = 'f';
  klucz[8] = 'l';  klucz[17] = 'v';  klucz[26] = 'z';

  printf("\n\n   Podaj zaszyfrowany tekst:\n     // przedzial liczb calkowitych <0;26>\n     // 1000 znakow\n     // -1 konczy podawanie\n");

  do
  {
    printf("   ");
    scanf("%d",&licz[n]);
    n = n + 1;
  }
  while (licz[n - 1] != -1);

  printf("\n   Odszyfrowany tekst wyglada tak:\n   ");

  while (licz[i] != -1)
  {
    printf("%c", klucz[licz[i]]);
    i = i +1;
  }

  printf("\n\n\n");

  return 0;

}
