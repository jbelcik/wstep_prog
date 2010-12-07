/*

* Poniższy program wypisuje

* Program powołuje zmienną liczba typu rzeczywistego (tj. float)

* przypisuje jej wartość liczby 0.5 oraz wypisuje wartość zmiennej

* liczba na ekranie. PRZYPOMINAM ZE

* tekst ktory teraz czytasz, jest zakomentowany

* i nie bedzie interpretowany jako kod programu. Jest to tzw.

* komentarz blokowy w odroznieniu od komentarza w jednej linii

* ktory uzyskuje sie przez wpisanie dwokrotnie znaku slash.

*/

#include <stdio.h> 
 /*wywołanie biblioteki*/


void main()

{

float liczba; /* deklaracja zmiennej liczba czyli nazwa typu zmiennej oraz jej nazwa*/



liczba = 0.5; /* nadanie zmiennej liczba wartości 0.5 */

     printf("To jest pierwszy program\n");

     printf("wypisujacy liczbe rzeczywista.\n");

     printf("zwróć uwage na to jak sie to robi w funkcji printf!");
     printf("oto ona: %f",liczba);

}
