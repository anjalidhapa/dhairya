#include <stdio.h>
int main () {
	int totalDays,month,year,rd;
	printf("enter total days:");
	scanf("%d",&totalDays);

	year=totalDays/365;
	month=totalDays/30;
	rd=totalDays%365%30;

	printf("year=%d\n",year);

	printf("month=%d\n",month);

	printf("rd=%d\n",rd);
	return 0;
}

