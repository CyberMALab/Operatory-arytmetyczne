#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b;
	int suma,roznica;
	int iloczyn, iloraz;
	int modulo;
	a=10;
	b=5;
/* operacja dodawania */
	suma=a+b;
/* operacja odejmowania */
	roznica=a-b;
/* operacja mnożenia */
	iloczyn=a*b;
/* operacja dzielenia */
	iloraz=a/b;
/* operacja modulo */
	modulo=a%b;
	printf(" a+b=%d\n a-b=%d\n a*b=%d\n a/b=%d\n",suma, roznica, iloczyn, iloraz);
	printf(" a%%b=%d", modulo);
	return 0;
}

