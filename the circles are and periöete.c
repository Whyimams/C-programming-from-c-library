#include <stdio.h>

int main(){
	float pi=3.14;
	float radius,area,perimeter;
	printf("Please enter the radius");
	scanf("%f",&radius);
	
	area=pi*(radius*radius);
	perimeter=2*pi*radius;
	
	printf("Perimeter:%.4f\n",perimeter);
	printf("Area:%.4f\n",area);
}
