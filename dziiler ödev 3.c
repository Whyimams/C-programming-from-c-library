#include <stdio.h>

int main(){
	char sehir[3][15];
	int i;
	for(i=0;i<3;i++){
		printf("Sehri girin :",i+1);
		scanf("%s",&sehir[i]);
	}
	for(i=0;i<3;i++){
		printf("%d. Sehir : %s \n",i+1,sehir[i]);
	}
	
	return 0;
	
	
	
}
