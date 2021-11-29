# Operatory arytmetyczne.

## Operator przypisania

Operatory arytmetyczne służą do wykonywania operacji matematycznych na zmiennych. Pierwszym z nich jest użyty już w poprzednim rozdziale operator przypisania. Jego symbolem jest znak ‘=’. Zapisuje on wartość wyrażenia podanego po prawej stronie (P-wyrażenie), do wyrażenia po lewej stronie (L-wyrażenie). L-wyrażenie jest musi spełniać pewne kryteria. My przyjmiemy, że L-wyrażeniem musi być zmienna. P-wyrażeniem jest każde L-wyrażenie oraz inne wyrażenia dające wynik możliwy do zapisu, czyli wszelkiego rodzaju działania matematyczne czy funkcje zwracające wartość (albo kombinacja tych dwóch). W ANSI C istnieje więcej operatorów przypisania, które przypisują od razu wynik działania arytmetycznego wywołanego na przypisywanej zmiennej. Ich opis znajduje się w tabeli w dalszej części tego rozdziału. Operator przypisania posiada wiązanie prawostronne, czyli wyrażenie po prawej stronie zostaje wykonane przed dokonaniem operacji przypisania.

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

Jedyne, gdzie należałoby się zatrzymać, to przy operacji dzielenia. Częstym „błędem” który spotykamy na początku przygody z programowaniem jest „ucinanie” przez program ciągu występującego po przecinku. „Błąd” ten spowodowany jest użyciem złego typu zmiennej do wykonania operacji i przechowania wyniku. Jeżeli chcemy uzyskać wynik zmiennoprzecinkowy, argumentami operacji i zmienną, do której zapisujemy wynik, muszą być typu zmiennoprzecinkowego (float lub double). Jeżeli użyjemy jednak do tego zmiennych całkowitych (int), wynikiem działania będzie dzielenie całkowite.

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

Oprócz konwersji jawnej, występuje konwersja niejawna. Nie deklaruje w niej bowiem programista typu na jaki ma być przekonwertowana, tylko kompilator dobiera domyślnie typ. 

*Przykład (2.5) konwersja niejawna*

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

Warto zauważyć, że w przykładzie  (2.4) również występuje konwersja niejawna przy pierwszej operacji przypisania. Konwersja tam jednak ze względu na prawostronne wiązanie operatora przypisania wykonuje się dopiero po wykonaniu działania dzielenia całkowitego, a konwersja jawna pokazana w przykładzie (2.5) zmusza przekonwertowanie zmiennej *a* przed wykonaniem operacji. W tym miejscu kryje się jednak jeszcze jedna konwersja – niejawna konwersja zmiennej *b* na zmienną typu *float .* Dzieje się tak, ponieważ kompilator przed wykonaniem jakiejkolwiek operacji arytmetycznej konwertuje wszystkie zmienne do typu, który przechowuje największą ilość informacji. W tym przypadku *float* niesie za sobą więcej informacji niż *int,* więc zmienna *b* zostaje przekonwertowana niejawnie na zmienną typu *float.* W przypadku w którym konwertujemy typ *float* na *int* to zostanie zapisana tylko część całkowita liczby (tak jak użycie funkcji podłoga). Na szczęście nad większością konwersji nie musimy się zastanawiać, kompilator wykona tę pracę za nas. Jednak  w przypadku pojawienia się pewnych błędów można zwrócić uwagę na typy zmiennych używanych w wyrażeniu i dokonać ewentualnej konwersji jawnej jeśli będzie to zasadne (albo dla czytelności kodu).

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
   printf("Inches: "); 
   float inches; 
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
