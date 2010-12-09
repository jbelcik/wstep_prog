#include <stdio.h>

int main()

{
  
  char klucz[27];
  char z;
  int n;
  
  klucz[0] = 's';  klucz[ 9] = 'w';  klucz[18] = 'k';
  klucz[1] = 'i';  klucz[10] = 'y';  klucz[19] = 'r';
  klucz[2] = 'n';  klucz[11] = 'c';  klucz[20] = 'j';
  klucz[3] = 'h';  klucz[12] = ' ';  klucz[21] = 'u';
  klucz[4] = 'm';  klucz[13] = 'b';  klucz[22] = 'd';
  klucz[5] = 't';  klucz[14] = 'q';  klucz[23] = 'g';
  klucz[6] = 'p';  klucz[15] = 'x';  klucz[24] = 'o';
  klucz[7] = 'a';  klucz[16] = 'e';  klucz[25] = 'f';
  klucz[8] = 'l';  klucz[17] = 'v';  klucz[26] = 'z';
  
  printf("\n\n   Wpisz tekst jaki chcesz zaszyfrowac (jedynie male litery lacinskie i spacja):\n   ");
  z = getchar();
  
  printf("\n   Zaszfrowany tekst wyglada tak (wcisnij CTRL+D aby zakonczyc program):\n   ");
  while (z != EOF)
  {
    n = 0;
    while (n < 27 && klucz[n] != z)  n++;
    
    if (n < 27)  printf("%i ",n);
    
    z = getchar();
  }
  
  printf("-1\n\n\n");

  return 0;

}
