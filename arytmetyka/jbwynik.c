/*

* Ponizszy program powoluje 2 zmienne typu float, x oraz y

* zmienia ich wartosci i wypisuje je na ekran

*/
 #include <stdio.h> 

 void main()
 
 {

 float x; /* deklaracja zmiennej i czyli nazwa typu zmiennej oraz jej nazwa*/

 float y; /* zwroc uwage, ze WSZYSTKIE zmienne deklarujemy na poczatku funkcji main*/
  y = 0;
  printf("%f",y);
  x = 6.5;   /*przypisanie, inaczej nadanie wartość  6 zmiennej x */
  printf("poczatkowa wartosc x: %f\n",x);
  x = x + 1;   /* zwiększenie, inaczej inkrementacja (o 1) zmiennej x */
  printf("x po inkrementacji o 1: %f\n",x);
  y = 2*x; /*mnozenie przez 2 */
  printf("tymczasem wartość  y wynosi: %f\n",y);
}
