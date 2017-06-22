#include <stdio.h>

void swap(int *aPtr, int *bPtr) {
   int holder = *aPtr;
	 *aPtr = *bPtr;
	 *bPtr = holder;
}

int main() {

	int a = 5;
	int b = 10;

	printf("a=%d, b=%d\n", a, b);

	swap(&a, &b);

	printf("a=%d, b=%d\n", a, b);

	return 0;
}
