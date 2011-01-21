#include <stdio.h>

int main()
{
  int s = 0, i = 0, j;

  printf("\n\n");
  while (i < 4)
  {
    printf("   i == %i   s == %i\n", i, s);
    j = i;
    while (j < 6 - i)
    {
      s = s + j;
      j++;
    }
    i++;
  }

  printf("   i == %i   s == %i\n\n\n", i, s);
}
