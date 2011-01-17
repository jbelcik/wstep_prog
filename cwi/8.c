#include <stdio.h>

#define N 7

int qq(int tab[N], int p, int k)
{
  int s, m1, m2;

  if (k - p == 1) return tab[p];
  else
  {
    s = (p + k)/2;
    m1 = qq(tab, p, s);
    m2 = qq(tab, s, k);
    if (m1 < m2) return m2;
    else return m1;
  }
}

int main()
{
  int i, a[N];

  for (i = 0; i < N; i++) a[(2*i)%N] = i;
  printf("\n%i\n\n", qq(a, 0, 7));
}
