#include<stdio.h>
#include<stdlib.h>

// Oblicza najwiekszy wspolny dzielnik przy zalozeniu, ze
//   n >= 0  i  k >= 0  oraz
//   n+k > 0  czyli argumenty nie sa jednoczesnie rowne zeru

int  nwd (int n, int k) {
  if (n<0  ||  k<0  ||  n+k == 0) {
    printf ("\n  Argumenty maja byc nieujemne");
    printf ("\n  i nie jednoczesnie zerowe\n\n");
    exit(1);
  }
  else
    if (n<k)  return nwd(k,n);
    else
      if (k==0)  return n;
      else  return nwd(k, n%k);
}

main () {
  int a, b;
  printf("Podaj dwie liczby naturalne: ");
  scanf("%i", &a); scanf("%i", &b);
  printf("\n  nwd(%i, %i) == %i\n\n", a, b, nwd(a,b));
}
