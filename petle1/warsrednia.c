 #include <stdio.h> 
 
 int main()
 {
 
 float suma; 
 int licznik; 
 float srednia;
 int liczba;
 int granica;

  suma = 0; 
  licznik = 0; 
  srednia = 0;
  liczba = 1;
  granica = 0;

  printf("podaj wartrosc graniczna\n");
  scanf("%d",&granica);

  while (licznik < granica)
    { 
    if (liczba%2 == 1)
      {

    suma = suma + liczba*liczba;
    liczba = liczba + 1;  
    licznik = licznik + 1;
      }

    else
      {

    liczba = liczba + 1;  
    licznik = licznik + 1;
       }
    }
 
srednia = suma/licznik; 
 
printf("oto suma liczb %f\n",suma);
 
printf("a to ich wartosc %f\n",srednia);
 

return 0;
 
}
