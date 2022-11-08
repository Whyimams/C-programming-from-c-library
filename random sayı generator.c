#include <stdio.h>
#include <stdlib.h>

int main(void){
	unsigned int frequency1=0;
	unsigned int frequency2=0;
	unsigned int frequency3=0;
	unsigned int frequency4=0;
	unsigned int frequency5=0;
	
	for (unsigned int roll=1;roll<=6000000;roll++){
		int face =1+rand()%6;
		
		switch(face){
			case 1:
				++frequency1;
				break;
			case 2:
				++frequency2;
				break;
			case 3:
				++frequency3;
				break;
			case 4:
				++frequency4;
				break;
			case 5:
				++frequency5;
				break;
				
		}
	}
	
	printf("%s%13s\n","face","Frequency");
	printf("1%13s\n",frequency1);
	printf("1%13s\n",frequency2);
	printf("1%13s\n",frequency3);
	printf("1%13s\n",frequency4);
	printf("1%13s\n",frequency5);
}
