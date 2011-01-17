#include <stdio.h>

#define Q 0.01

float rien(int n, int k, float a, int q)
{
  if (q*Q > 1) return a;
  else
  {
    if (n*q < k) return rien(n, k, a, 2*q);
    else return rien(n*q - k, k*q, a + 1.0/q, 2*q);
  }
}

int main()
{
  printf("\n%f\n\n", rien(3, 7, 0.0, 1));
}
