 #include <stdio.h> 

 void main()
 
 {

   float a;
   float b;
   float c;
   float delta;

   printf("podaj a,b i c wciskajac enter po kazdej z nich\n");
   scanf("%f%f%f",&a,&b,&c);
   
   delta = b*b-4*a*c;

   printf("delta dla a,b i c rowna jest:\n%f\n",delta);

 }
