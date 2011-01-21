#include <stdio.h>

float f(float a, float b)
{
  float c;
  if (b - a < 0.25) return a;
  else
  {
    c = (a + b)/2;
    if (c*c < 2) return f(c, b);
    else return f(a, c);
  }
}

int main()
{
  printf("%f\n", f(1, 3));
}
