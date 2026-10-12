#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
# include <stdlib.h>

int toyfactory() {
	int a, b, c,r;
	printf("¬ведите массу первой игрушки в граммах: ");
	scanf("%d", &a);

	printf("¬ведите массу второй игрушки в граммах: ");
	scanf("%d", &b);

	printf("¬ведите массу третьей игрушки в граммах: ");
	scanf("%d", &c);

	printf("”словие выполнено, если 1, не выполнено, если 0: \n");
	r = (a % 7 == 0) && (b % 7 == 0) && (c % 7 == 0);
	printf("%d", r);
	return 0;
}


int main() {
	setlocale(LC_CTYPE, "RUS");
	toyfactory();
	return 0;
}