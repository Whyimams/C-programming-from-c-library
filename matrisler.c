#include<stdio.h>

int main(){
	
	int dizi[2][2];
	int i,j;
	dizi[0][0]=1;
	dizi[0][1]=2;
	dizi[1][0]=3;
	dizi[1][1]=4;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%5d",dizi[i][j]);
		}
		printf("\n");
	}
	
getch();	
}
