 #include <stdio.h> 

 void main()
 
 {

 float x; /* deklaracja zmiennej i czyli nazwa typu zmiennej oraz jej nazwa*/

  x = 6.5;   /*przypisanie, inaczej nadanie wartosci 6 zmiennej x */
  printf("poczatkowa wartosc x: %f\n",x);
   x = x + 1;  /* zwiekszenie, inaczej inkrementacja (o 1) zmiennej x */
  printf("po inkrementacji o 1: %f\n",x);
  x = 2*x; /*mnozenie przez 2 */
  printf("po pomnożeniu przez 2: %f\n",x);
  x = x/3;
  printf("po podzieleniu przez 3: %f\n",x);

float y; /* deklaracja zmiennej i czyli nazwa typu zmiennej oraz jej nazwa*/

  y = 17;  
  printf("poczatkowa wartosc y: %f\n",y);
  y = y-2;
  printf("po odjeciu 2 : %f\n",y);
  y = y/3; 
  printf("po podzieleniu przez 3: %f\n",y);
  y = y+1;
  printf("po dodaniu 1: %f\n",y);
  y = y*2;
  printf("po pomnozeniu przez 2: %f\n",y);
}
