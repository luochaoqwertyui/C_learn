#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	printf("hi\n");
	int num1 = 0;
	int num2 = 0;
	int age = 10;
	printf("a=%d\n" ,age);
	scanf("%d %d\n",&num1, &num2);
	int b = num1 + num2;
	printf("%d",b);
	return 0;
	}