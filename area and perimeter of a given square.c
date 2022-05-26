#include <stdio.h>

int main(){
	int side,area,perimeter;
	
	printf("please enter a side:");
	scanf("%d",&side);
	
	area=side*side;
	perimeter=side*4; // side *4 because the square have 4 side and perimeter is the sum of the sides
	
	printf("Area is:%d \n",area);
	printf("Perimeter is:%d\n",perimeter);
	
	return 0;
}
