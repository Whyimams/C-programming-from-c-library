#include <stdio.h>

int main(){
	int time,distance; //time is minutes, distance is kilometer
	float speed;
	
	printf("please enter the distance ");
	scanf("%d",&distance);
	
	printf("please enter the time ");
	scanf("%d",&time);
	
	speed= (float)distance/time;
	
	printf("Distance :%d\n",distance);
	printf("Time :%d\n",time);
	printf("Speed :%.4f",speed);


	
	
}
