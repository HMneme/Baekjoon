#include <stdio.h>

int main()
{
	int h, m, e;
	scanf("%d %d", &h, &m);

	int total_minute = h * 60 + m - 45;
	int final_hour = (total_minute / 60) % 24;
	int final_minute = total_minute % 60;

	if (total_minute < 0) {
		final_hour = 23;
		final_minute = 60+(m - 45);
		
	}
	printf("%d %d", final_hour, final_minute);
	return 0;

}