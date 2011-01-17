#include <stdio.h>

#define N 7

int main()
{
  int i, j;

  for (i = 0; i < N; i++)
  {
    for (j = 0; j < N - i; j++) printf(" ");
    printf("*");
    if (i == 0) printf("\n");
    else
    {
      if (N - i == N/2 )
      {
        for (j = 0; j < 2*i - 1; j++) printf("*");
      }
      else
      {
        for (j = 0; j < 2*i - 1; j++) printf (" ");
      }
      printf("*\n");
    }
  }
}
