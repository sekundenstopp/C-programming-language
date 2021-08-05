#include <stdio.h>

#define MONTHS 12

int main() {
	/* Monthly temperature*/
	int high[MONTHS] = { 2,5,11,18,23,27,29,30,26,20,12,4 };
	int low[MONTHS] = { -7,-5,1,7,13,18,22,22,16,9,2,-5 };

	for (int i = 0; i < MONTHS; ++i) {
		printf("%d, %d\n", high[i], low[i]);
	}

	float sum_high = 0.0;
	float sum_low = 0.0;
	for (int i = 0; i < MONTHS; i++) {
		sum_high += high[i];
		sum_low += low[i];
	}
		
	printf("Average of high = %.2f\n", sum_high / (float)MONTHS);
	printf("Average of low = %.2f\n", sum_low / (float)MONTHS);
	
	//Addresses 
	printf("%p %p\n", high, &high[0]);

	for (int i = 0; i < MONTHS; i++)
		printf("%lld\n", (long long)&high[i]); //X64
	printf("\n");

	//When array is not initialized
	int not_init[4];
	for (int i = 0; i < 4; i++)
		printf("%d ", not_init[i]);
	printf("\n");

	static int not_init1[4]; // storage class
	for (int i = 0; i < 4; i++)
		printf("%d ", not_init1[i]);
	printf("\n");

	// partially initialized
	int insuff[4] = { 2,4 };
	for (int i = 0; i < 4; i++)
		printf("%d\n", insuff[i]);

	// omitting size
	const int power_of_twos[] = { 1,2,4,8,16,32,64 };
	printf("%lld\n", sizeof(power_of_twos));
	printf("%lld\n", sizeof(int));
	printf("%lld\n", sizeof(power_of_twos[0]));

	for (int i = 0; i < sizeof power_of_twos / sizeof power_of_twos[0]; ++i)
		printf("%d ", power_of_twos[i]);
	printf("\n");

	// designated initializers
	int days[MONTHS] = { 31,28,[4] = 31,30,31,[1] = 29 };
	for (int i = 0; i < MONTHS; ++i)
		printf("%d ", days[i]);
	
	return 0;
}