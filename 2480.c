#include <stdio.h>

int main()
{
	int a, b, c;
	int max;

	scanf("%d %d %d", &a, &b, &c);

	max = a;
	if (a > b&& a>c)
		max = a;
	if (b > a && b > a)
		max = b;
	if (c > a && c > b)
		max = c;

	if (a == b && b== c)
		printf("%d", 10000 + a * 1000);

	else if (a == b || b == c)
		printf("%d", 1000 + b * 100);

	else if (a == c)
		printf("%d", 1000 + a * 100);

	else if (a != b && b != c && a != c) 
		printf("%d", max * 100);
		
	return 0;
}