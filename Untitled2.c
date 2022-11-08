#include <stdio.h>

int main(){
	int sayi,us;
	int toplam;
	printf(" ");
	scanf("%d",&sayi);
	for(int i=0;i>sayi;i++){
		while(sayi>0){
		toplam+=(sayi%10);
		sayi=sayi/10;
	}
		
	}
	
	printf("toplam :%d",toplam);
	
	
	return 0;
}
