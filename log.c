#include <stdio.h>

main()

{

  int a;
  int b;
  int licz = 0;

  printf("\n\n   Program obliczajacy logarytm przy podstawie a z liczby b");
  printf("\n   a = ");
  scanf("%d",&a);
  printf("   b = ");
  scanf("%d",&b);

  while (b / a > 1)
  {  
    b = b / a;
    licz = licz + 1;
	}

  printf("\n   Wynik tego logarytmu rowny jest %d\n\n\n",licz);

return 0;

}
