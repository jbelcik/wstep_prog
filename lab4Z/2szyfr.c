#include <stdio.h>

int main()

{
  
  char klucz[27], szyfr[27], z;
  int n;
  
  klucz[0] = 'a';  klucz[ 9] = 'b';  klucz[18] = 'c';
  klucz[1] = 'd';  klucz[10] = 'e';  klucz[19] = 'f';
  klucz[2] = 'm';  klucz[11] = 'n';  klucz[20] = 'o';
  klucz[3] = 'p';  klucz[12] = 'r';  klucz[21] = 's';
  klucz[4] = 'y';  klucz[13] = 'z';  klucz[22] = 'q';
  klucz[5] = 'x';  klucz[14] = 'v';  klucz[23] = ' ';
  klucz[6] = 't';  klucz[15] = 'u';  klucz[24] = 'w';
  klucz[7] = 'j';  klucz[16] = 'k';  klucz[25] = 'l';
  klucz[8] = 'g';  klucz[17] = 'h';  klucz[26] = 'i';

  szyfr[0] = 'i';  szyfr[ 9] = 'j';  szyfr[18] = ' ';
  szyfr[1] = 'v';  szyfr[10] = 'h';  szyfr[19] = 'k';
  szyfr[2] = 'x';  szyfr[11] = 'l';  szyfr[20] = 'g';
  szyfr[3] = 'm';  szyfr[12] = 'f';  szyfr[21] = 'q';
  szyfr[4] = 'e';  szyfr[13] = 'n';  szyfr[22] = 'z';
  szyfr[5] = 'y';  szyfr[14] = 'd';  szyfr[23] = 'o';
  szyfr[6] = 'w';  szyfr[15] = 'p';  szyfr[24] = 'c';
  szyfr[7] = 'r';  szyfr[16] = 'b';  szyfr[25] = 'u';
  szyfr[8] = 'a';  szyfr[17] = 's';  szyfr[26] = 't';
  
  printf("\n\n   Wpisz tekst jaki chcesz zaszyfrowac (jedynie male litery lacinskie i spacja):\n   ");
  z = getchar();
  
  printf("\n   Zaszfrowany tekst wyglada tak (wcisnij CTRL+D aby zakonczyc program):\n   ");
  while (z != EOF)
  {
    n = 0;
    while (n < 27 && klucz[n] != z)  n++;
    
    if (n < 27)  printf("%c", szyfr[n]);
    
    z = getchar();
  }
  
  printf("\n\n\n");

  return 0;

}
