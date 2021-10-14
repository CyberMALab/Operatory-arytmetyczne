#include <stdio.h>
#include <stdlib.h>

int main() {
	int a=5;
	int b=10;
	float c;
	c=a/b;
	printf("%f\n",c);
	c=(float)a/b; /* konwersja jawna int a na typ float */
	printf("%f\n",c);
	return 0;
}

