#include <stdio.h>

void swapper(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
	int a = 0;
	int b = 0;

	printf("Enter the Value of First Variable: ");
	scanf("%d", &a);

	printf("Enter the Value of Second Variable: ");
	scanf("%d", &b);

	swapper(&a, &b);

	printf("First Variable = %d\nSecond Variable = %d\n", a, b);

	return 0;
}
