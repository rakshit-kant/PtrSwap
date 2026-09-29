#include <stdio.h>

struct Pair {
	int a;
	int b;
};

struct Pair swapper(int *x, int *y) {
	struct Pair swapped;

	int temp = *x;
	*x = *y;
	*y = temp;

	swapped.a = *x;
	swapped.b = *y;

	return (struct Pair){*x, *y};
}

int main() {
	int a = 0;
	int b = 0;

	printf("Enter the Value of First Variable: ");
	scanf("%d", &a);

	printf("Enter the Value of Second Variable: ");
	scanf("%d", &b);

	struct Pair swapped = swapper(&a, &b);

	printf("First Variable = %d\nSecond Variable = %d\n", swapped.a, swapped.b);

	return 0;
}
