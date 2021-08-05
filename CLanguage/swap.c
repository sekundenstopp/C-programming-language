#include <stdio.h>

void swap(int a, int b) {
	//printf("%p %p", &a, &b);
	int temp = a;
	a = b;
	b = temp;
}

void swap2(int* a, int* b) {
	//printf("%p %p", a, b);
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a = 123;
	int b = 456;

	//swap
	int temp = a;
	a = b;
	b = temp;
	//printf("%p %p\n", &a, &b);
	printf("%d %d\n", a, b);

	swap(a, b);
	printf("%d %d\n", a, b);

	swap2(&a, &b);
	printf("%d %d\n", a, b);

	return 0;
}