#include <stdio.h>

int main(void) {
	long long a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	long long sum = a + b + c;
	printf("%lld", sum);

	return 0;
}