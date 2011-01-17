#include <stdio.h>

#define N 10
#define K 8
#define L 16

int main()
{
  int i, j, ij;

  for (i = -2*N; i < 2*N; i++)
  { 
    for ( j = -2*N; j < 2*N; j++)
    {
      if (i == 0 && j == 0) printf("+");
      else
        if (i == 0) printf("-");
        else
          if (j == 0) printf("|");
          else
          {
            ij = i*j;
            if (K <= ij && ij <= L) printf("*");
            else printf(" ");
          }
    }
    printf("\n");
  }
}
