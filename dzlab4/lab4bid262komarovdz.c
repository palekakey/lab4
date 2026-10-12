#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
# include <stdlib.h>

int toyfactory(int a, int b, int c);




int main() {
	setlocale(LC_CTYPE, "RUS");
	int a, b, c, r;
	printf("Введите массу первой игрушки в граммах: ");
	scanf("%d", &a);

	printf("Введите массу второй игрушки в граммах: ");
	scanf("%d", &b);

	printf("Введите массу третьей игрушки в граммах: ");
	scanf("%d", &c);

	r = toyfactory(a, b, c);
	printf("Если 1 - условие выполнено, если 0 - условие не выполнено:");
	printf("\t%d", r);
	return 0;
}

int toyfactory(int a, int b, int c) {
	int toyfactory;
	toyfactory = (a % 7 == 0) && (b % 7 == 0) && (c % 7 == 0);
	return toyfactory;
}