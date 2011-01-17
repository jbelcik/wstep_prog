#include <stdio.h>

#define N 10

int main()
{
  int a[N], i, j;

  for (i = 0; i < N; i++) a[i] = i;
  for (i = N - 1; i >= 0; i--)
  {
    a[i] = 0;
    for (j = 0; j < i; j++) a[i] = a[i] + a[j];
  }
  for (i = 0; i < N; i++) printf("%i\n", a[i]);
}
