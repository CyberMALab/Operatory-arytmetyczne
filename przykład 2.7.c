#include <stdio.h>
#include <stdlib.h>

int main() { 
   int x, y; 
   printf("Podaj x i y "); 
   scanf ("%d %d" , &x, &y ); 
/* wykonanie operacji arytmetycznej wewnątrz funkcji – w takim przypadku kompilator obliczy najpierw wartość wyrażenia a następnie wyliczoną wartość poda jako argument funkcji*/
   printf("Suma x+y = %d\n", x+y ); 
   return 0; 
} 
