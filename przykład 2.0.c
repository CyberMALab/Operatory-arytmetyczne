#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b;
	char c,d;	
/* przypisanie wartości zmiennej przez wartość */
	a = 3;
	b = 4;
	c = 'A';
	d = 'a';
	printf("a:%d b:%d c:%c d:%c\n",a,b,c,d);
/* przypisanie wartości zmiennej za pomocą innej zmiennej */
	a = b;
	c = d;
	printf("a:%d b:%d c:%c d:%c",a,b,c,d);
	return 0;
}
