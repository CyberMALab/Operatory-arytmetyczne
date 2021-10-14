#include <stdio.h>
#include <stdlib.h>

int main() { 
   printf("Inches: "); 
   float inches; 
   scanf("%f", &inches); 
/* wykonanie mnożenia wewnątrz funkcji printf i wyświetlenie z formatowaniem*/
   printf("Centimetres: %.2f", inches*2.54); 

   return 0; 
} 

