#include <stdio.h>

int main()

{
   int h;
   int a;
   int hh;
   int aa;

   printf("\n\n   Podaj wysokosc rownolegloboku:\n   ");
   scanf("%d",&h);
   printf("\n   Podaj szerokosc podstawy rownolegloboku:\n   ");
   scanf("%d",&a);
   printf("\n");

   while (h > 0)
   {
     printf("   ");
     hh = h;
     aa = a;
     while (hh - 1 > 0)  
     {
       printf(" ");
       hh = hh - 1;
     }
     while (aa > 0)
     {
       printf("*");
       aa = aa - 1;
     }
       h = h - 1;
       printf("\n");
     }

   printf("\n\n");

   return 0;
}
