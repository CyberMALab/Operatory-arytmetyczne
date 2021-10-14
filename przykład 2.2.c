#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b,c,wynik;
	a=4;
	b=5;
	c=3;
	printf("a=%d b=%d c=%d \n", a,b,c);
/* działanie na trzech zmiennych */
	wynik = a+b*c;
	printf("a+b*c = %d\n", wynik);
/* działanie z nawiasami */
	wynik = (a+b)*c;
	printf("(a+b)*c = %d\n", wynik);	
/* działanie na dwóch zmiennych i wartości */
	wynik = (a+b)*2;
	printf("(a+b)*2 = %d\n", wynik);	

	return 0;
}
