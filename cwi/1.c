#include <stdio.h>

#define N 100

int main()
{
  int n, i, j;

  for (n = 10; n < N; n = n + 10)
  {
    i = 0;
    j = 1;
    while (j < n)
    {
      j = i + j;
      i = j - i;
    }
    printf("%i\n", j);
  }
}
