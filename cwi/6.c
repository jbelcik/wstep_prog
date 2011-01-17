#include <stdio.h>

int abc(int n)
{
  if (n <= 1) return n;
  else return abc(n - 1) + abc(n - 2) - 1;
}

int main()
{
  printf("%i\n", abc(6));
}
