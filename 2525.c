#include <stdio.h>

int main()
{
	int hour, minute, cook;
	
	scanf("%d %d", &hour, &minute);
	scanf("%d", &cook);

	int total_minute = hour * 60 + minute + cook;

	int final_hour = (total_minute / 60) % 24;
	int final_minute = total_minute % 60;

	printf("%d %d", final_hour, final_minute);

	return 0;
}