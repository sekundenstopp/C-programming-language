#include <stdio.h>

int main() {
	char a = 'a'; char* ptr = &a;
	//int a = 100; int* ptr = &a;
	//double a = 100; double* ptr = &a;
	//long a = 100; long* ptr = &a;
	//long long a = 100; long long* ptr = &a;
	
	printf("%p %lld\n", ptr, (long long)ptr);

	ptr++; // ptr+=1

	printf("%p %lld\n", ptr, (long long)ptr);

	//ptr = -ptr; //Not working
	//ptr = +ptr; //Not working

	//Subtraction
	double arr[10];
	double* ptr1 = &arr[3], * ptr2 = &arr[5];

	//ptr2 = ptr1 + ptr2; //Not working
	int i = ptr2 - ptr1; // meaning?

	printf("%p %p %d\n", ptr1, ptr2, i);

	return 0;
}