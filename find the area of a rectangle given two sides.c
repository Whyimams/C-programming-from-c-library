#include <stdio.h>


int main(){
	int shortside,longside,area,perimeter;
	
	printf("Please enter long side:");
	scanf("%d",&longside);
	printf("Please enter short side:");
	scanf("%d",&shortside);
	
	area=shortside*longside;
	perimeter=(longside*2)+(shortside*2);
	
	printf("Perimeter is :%d\n",perimeter);
	printf("Are is: %d\n",area);
	
	return 0;
}
