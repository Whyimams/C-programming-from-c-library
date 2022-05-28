#include <stdio.h>

int main(){
	int age,month,day,hour;
	long minute,second;
	printf("How old are you ?\n");
	scanf("%d",&age);
	
	month=age*12;
	day=age*365;
	hour=day*24;
	minute=hour*60;
	second=minute*60;
	
	printf("Age: %d\n",age);
	printf("Month: %d\n",month);
	printf("Day: %d\n",day);
	printf("Hour: %d\n",hour);
	printf("Minute: %ld\n",minute);
	printf("Second: %ld\n",second);	
	

	
}
