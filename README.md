# Operatory arytmetyczne.

## Operator przypisania

Operator przypisania `=` zapisuje wartość wyrażenia po prawej stronie do zmiennej po lewej stronie. Po prawej stronie może znaleźć się liczba, inna zmienna, działanie matematyczne lub funkcja zwracająca wartość. Po lewej stronie na tym etapie kursu umieszczamy zmienną, której wartość chcemy zmienić. W dalszej części rozdziału poznamy także operatory, które łączą działanie arytmetyczne z przypisaniem.

*Przykład (2.0)* *Wykonanie przypisania*

```
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
```

*Wynik działania programu:*

> a:3 b:4 c:A d:a
>
> a:4 b:4 c:a d:a

## Operatory arytmetyczne

Operatory arytmetyczne odpowiadają za działania dodawania, odejmowania, mnożenia i dzielenia. Ich użycie jest bardzo intuicyjne więc, najlepiej pokazać je na przykładzie.

*Przykład (2.1) Operacje arytmetyczne*

```
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

```

*Wynik działania programu:*

> a+b=15
>
> a-b=5
>
> a\*b=50
>
> a/b=2
>
> a%b=0

Jak widać, aby dokonać operacji arytmetycznych w języku C, wystarczy stworzyć działanie matematyczne po prawej stronie operatora przypisania (=) używając zmiennych lub wartości. Tworząc takie działanie można użyć więcej niż jednego operatora arytmetycznego, a komputer obliczy wartość zgodnie z kolejnością wykonywania działań. Wewnątrz działań matematycznych w programowaniu można używać również nawiasów. Jeżeli zdecydujemy się nie używać nawiasów, to w wyrażeniu  z użyciem operatorów arytmetycznych istnieje wiązanie lewostronne – działanie po lewej stronie, z tym samym priorytetem arytmetycznym zostanie wykonane jako pierwsze.

*Przykład (2.2) Operacje arytmetyczne wieloargumentowe*

```
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
```



*Wynik działania programu:*

> a=4 b=5 c=3
> 
> a+b\*c = 19
>
> (a+b)\*c = 27
>
> (a+b)\*2 = 18

## Dzielenie całkowite a dzielenie arytmetyczne

Jedyne, gdzie należałoby się zatrzymać, to przy operacji dzielenia. Częstym „błędem” na początku nauki jest oczekiwanie części ułamkowej po podzieleniu dwóch liczb całkowitych. Aby otrzymać wynik zmiennoprzecinkowy, przynajmniej jeden z argumentów dzielenia musi mieć typ float lub double. Wynik możemy zapisać w zmiennej zmiennoprzecinkowej. Jeżeli oba argumenty są całkowite, dzielenie zostanie wykonane jako całkowite, nawet gdy wynik przypiszemy do zmiennej typu float lub double.

*Przykład (2.3) Różnica dzielenia arytmetycznego i dzielenia całkowitego*

*Dzielenie całkowite*

```
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b;
	int c;
	a=10;
	b=4;
	c= a/b;
   	printf("%d/%d=%d",a,b,c);
	return 0;
}
```
*Wynik działania programu:*
> 10/4=2

*Dzielenie arytmetyczne*

```
#include <stdio.h>
#include <stdlib.h>

int main() {
	float a,b;
	float c;
	a=10;
	b=4;
  	c= a/b;
   	printf("%0.0f/%0.0f=%0.1f",a,b,c);
	return 0;
}

```
*Wynik działania programu:*
> 10/4=2.5


## Konwersja typów

Konwersję typów wykorzystuje się w sytuacji, w której potrzebna nam jest zmiana typu przechowywanej zmiennej. Przykładem są zmienne przechowywane jako całkowitoliczbowe na których chcemy dokonać operacji dzielenia arytmetycznego. W takim przypadku należy zmusić kompilator, aby potraktował zmienne całkowitoliczbowe jako zmiennoprzecinkowe. Takie działanie to konwersja jawna. Polega ona na podaniu w nawiasie przed zmienną typu na jaki ma zostać konwertowana. Wtedy zmienna bezpośrednio za nawiasem zostanie przekonwertowana do typu podanego w nawiasie. 

*Przykład (2.4) konwersja jawna*

```
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
```

*Wynik działania programu*

> 0.000000
>
> 0.500000

Oprócz konwersji jawnej występuje konwersja niejawna. Programista nie zapisuje wtedy rzutowania: typ potrzebny do wykonania działania wynika z typów jego argumentów.

*Przykład (2.5) konwersja niejawna*

```
#include <stdio.h>
#include <stdlib.h>

int main() {
	float a=5;
	int b=10;
	float c;
	c=a/b; /* b jest niejawnie konwertowane do typu float */
	printf("%f\n",c);
	return 0;
}
```

*Wynik działania programu:*

> 0.500000

W przykładzie (2.4) działanie `a/b` jest najpierw dzieleniem całkowitym, a dopiero jego wynik zostaje zapisany jako `float`. Po jawnym rzutowaniu `a` dzielenie daje wynik zmiennoprzecinkowy. W przykładzie (2.5) `a` ma już typ `float`, więc przed dzieleniem wartość `b` jest niejawnie konwertowana do tego typu. Wynik wynosi `0.5`. Przy konwersji wartości zmiennoprzecinkowej na całkowitą część ułamkowa jest odrzucana. Jeśli wynik działania nas zaskakuje, sprawdźmy typy jego argumentów.

## Podsumowanie operatorów arytmetycznych i przypisania.

### Operatory arytmetyczne

|znak|funkcja|
| :-: | :--- |
|`+`|Dodawanie|
|`-`|Odejmowanie|
|`*`|Mnożenie|
|`/`|Dzielenie|
|`%`|Modulo (reszta z dzielenia)|


### Operatory przypisania
|znak|funkcja|przykład|Zapis arytmetyczny|
| :-: | :-------------- | :-: | :----:|
|`=`|Zwykłe przypisanie|`x=2`||
|`+=`|Przypisanie sumy|`x+=2`|`x=x+2`|
|`-=`|Przypisanie różnicy|`x-=2`|`x=x-2`|
|`*=`|Przypisanie iloczynu|`x*=2`|`x=x*2`|
|`/=`|Przypisanie ilorazu|`x/=2`|`x=x/2`|
|`%=`|Przypisanie reszty z dzielenia|`x%=2`|`x=x%2`|

## Operator inkrementacji i dekrementacji

W języku C istnieją również operatory inkrementacji i dekrementacji. Inkrementacja to zwiększenie zmiennej o 1 a dekrementacja to zmniejszenie o 1. Operacje te w języku C dokonuje się poprzez użycie podwójnego zapisu znaku ‘+’ lub ‘-‘ przed lub po zmiennej. W przypadku użycia znaku przed zmienną operacja dokona się przed wykonaniem wyrażenia arytmetycznego w którym się znajduje, natomiast jeżeli znajduje się za zmienną, to operacja dokona się po wykonaniu wyrażenia.

*Przykład (2.6) Różnica pomiędzy preinkrementacją a postinkrementacją.*

*Preinkrementacja*
```
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b;
	a=2;
	b=++a;
	printf("a=%d \nb=%d",a,b);
	return 0;
}
```

*Wynik działania programu:*
> a=3
> 
> b=3

*Postinkremetacja*
```
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b;
	a=2;
	b=a++;
	printf("a=%d \nb=%d",a,b);
	return 0;
}
```
*Wynik działania programu:*
> a=3
>
> b=2


## Przykłady do analizy:

*Przykład (2.7) wyświetlenie sumy dwóch liczb*

```
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

```

*Przykład (2.8) wyświetlenie iloczynu i formatowanie wyświetlania*

```
#include <stdio.h>
#include <stdlib.h>

int main() { 
   float inches; 
   printf("Inches: ");
   scanf("%f", &inches); 
/* wykonanie mnożenia wewnątrz funkcji printf i wyświetlenie z formatowaniem*/
   printf("Centimetres: %.2f", inches*2.54); 

   return 0; 
} 
```


## Zadania do samodzielnego wykonania: 

1. Napisz program, który pobierze od użytkownika 3 liczby całkowite, a następnie wyświetli wartości:
   1. sumy trzech,
   1. różnicy pierwszych dwóch,
   1. iloczynu pierwszej i trzeciej,
   1. ilorazu trzeciej i drugiej.

1. Napisz program, który wylicza średnią dla 5 ocen.

***
[Poprzednia część](https://github.com/CyberMALab/Hello-World-czyli-procerudy-wej-cia-i-wyj-cia-proste-typy-zmiennych.git) | [Spis treści](https://github.com/CyberMALab/Wprowadzenie-do-programowania-w-j-zyku-ANSI-C.git) | [Następna część](https://github.com/CyberMALab/Instrukcja-warunkowa.git)
***
&copy; Cyberspace Modelling and Analysis Laboratory
