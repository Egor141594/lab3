#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define D 2.54
task_one();
task_two();
task_three();
homework();
int main() {
	setlocale(LC_ALL, "RUS");
	task_one();
	task_two();
	task_three();
	homework();
	return 0;
}
int task_one() {
	int num1;
	int num2;
	puts("Введите первое число:");
	scanf_s("%d", &num1);
	puts("Введите второе число:");
	scanf_s("%d", &num2);
	int a = num1 + num2;
	int b = num1 - num2;
	int c = num1 * num2;
	int d = num1 / num2;
	int e = num1 % num2;
	printf("Сумма:%d\nРазность:%d\nПроизведение:%d\nДеление:%d\nДеление с остатком: %d\n", a, b, c, d, e);
	return 0;
}
int task_two() {
	int dym;
	float result;
	puts("Введите количество дюймов:");
	scanf_s("%d", &dym);
	result = D * dym;
	printf("%d дюймов - это %.1f см\n", dym, result);
	return 0;
}
int task_three() {
	int a1;
	int b1;
	puts("Введите a:");
	scanf_s("%d", &a1);
	puts("Введите b:");
	scanf_s("%d", &b1);
	int sum = a1 + b1;
	int sub = a1 - b1;
	int product = a1 * b1;
	printf("-------------------------------------\n");
	printf("| %-9s|  %-9s|  %-9s | \n", "a * b", "a + b", "a - b");
	printf("-------------------------------------\n");
	printf("|%5.0d*%-5.0d|%5.0d+%-5.0d|%5.0d-%-5.0d|\n", a1, b1, a1, b1, a1, b1);
	printf("-------------------------------------\n");
	printf("|%11d|%11d|%11d|\n", product, sum, sub);
	printf("-------------------------------------\n");
	scanf_s("");
	return 0;
}
int homework(){
	double a;
	double R;
	double r;
	puts("Введите значение а:");
	scanf_s("%lf", &a);
	r = a / 2;
	R = (a * sqrt(2)) / 2;
	printf("Радиус вписанной окружности: %.2lf\n Радиус описанной окружности: %.2lf", r, R);
}
