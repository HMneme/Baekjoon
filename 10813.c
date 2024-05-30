#include <stdio.h>
#define MAX 100

int main(void)
{
	int arr[MAX];
	int temp;
	int n, m,i,j;

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}

	for (int a = 0; a < m; a++) {
		scanf("%d %d", &i, &j);
		temp = arr[i-1];
		arr[i-1] = arr[j-1];
		arr[j - 1] = temp;
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;

}