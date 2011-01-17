#include <stdio.h>

#define N 7
#define K 3
#define L -2

int main()
{
  int i, j;

  for (i = -2*N; i < 2*N; i++)
  {
    for (j = -2*N; j < 2*N; j++)
    {
      if ((i - L)*(i - L) + (j - K)*(j - K) > N*N) printf ("*");
      else printf(" ");
    }
    printf("\n");
  }
}
