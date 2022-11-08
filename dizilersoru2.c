#include <stdio.h>


int main(){
	
	int i;
	int dizi[]={10,20,30,40,50};
	int toplam=0;
	for(i=0;i<5;i++){
		toplam=toplam+dizi[i];
	}
	printf("Toplam : %d",toplam);
	return 0;
}
