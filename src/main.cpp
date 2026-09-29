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
	int a = 1;
	int b = 2;

	struct Pair swapped = swapper(&a, &b);

	printf("a = %d\nb = %d\n", swapped.a, swapped.b);

	return 0;
}
