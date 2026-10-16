#define _CRT_SECURE_NO_DEPRECATE
#include <stdlib.h>
#include <locale.h>
#include <stdio.h>


int task1() {
	char c = 'l';
	int i = 127;
	float f = 3.14f;
	double d = 5e-12;
	printf("c = %c\n", c);
	printf("i = %d\n", i);
	printf("f = %.2f\n", f);
	printf("d = %.12f\n", d);

	printf("Введите новый символ для c: \n");
	scanf("%c", &c);

	printf("Введите новое число для i: \n");
	scanf("%d", &i);

	printf("Введите новое число (до 2 символов после запятой) для f: \n");
	scanf("%f", &f);

	printf("Введите новое число (до 12 символов после запятой) для d: \n");
	scanf("%lf", &d);

	printf("c = %c\n", c);
	printf("i = %d\n", i);
	printf("f = %.2f\n", f);
	printf("d = %.12f\n", d);

	//1a:
	int it = (int)f;
	float ft = f - it;
	printf("Целая часть f: %d\n", it);
	printf("Дробная часть f: %f\n", ft);

	//1б:
	printf("Символ: %c\n", c);
	printf("Шестнадцатеричный код: 0x%X\n", c);
	printf("Десятичный код: %d\n", c);

	//1в:
	printf("Результат 1/%d = %.1f\n", i, 1.0 / i);


	return 0;
}

int task2() {
	int a = 11, b = 3;
	int x;
	float y;
	double z;
	x = a / b;
	y = a / b;
	z = a / b;

	printf("%d\n", x);		//выводит результат целочиселнного деления, т.к. x является целым числом и a,b - целые числа. a/b - результат целочисленного деления
	printf("%f\n", y);		//выводит 3.0...., т.к. a/b - целое число -> a,b целые числа
	printf("%f\n", z);		//выводит 3.0...., т.к. a/b - целое число -> a,b целые числа

	printf("%f\n", (float)a / b); //присвоили целочисленному a/b значение вещественного числа
	printf("%f\n", (double)a / b); //присвоили целочисленному a/b значение вещественного числа высокой точности
	printf("%f\n", (float)(a / b)); //у скобок высший приоритет -> a/b остается целым числом
	printf("%f\n", (double)(a / b)); //у скобок высший приоритет -> a/b остается целым числом

	return 0;
}

int task3() {
	int n, a, b, x, y;
	printf("Введите целое трёхзначное число:\n");
	scanf("%d", &n);
	a = n % 10;
	x = n / 10;
	b = x % 10;
	y = x / 10;

	printf("последния цифра: %d, первая цифра: %d, сумма цифр: %d, число наоборот: %d%d%d",a,y,a+b+y,a,b,y); 



	return 0;
}

int main() {
	setlocale(LC_ALL, ".UTF8"); //в моей сборке на VS не работал setlocale(LC_CTYPE, "RUS"), поэтому я поискал альтернативу для вывода текста на русском
	task3();

	return 0;
}
