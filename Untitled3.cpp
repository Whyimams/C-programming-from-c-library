#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h> 


  
int main()
{
	
	int n ;
	int diziuzunlugu;
	printf(" dizi uzunlušunu giriniz\n");
	scanf("%d",&diziuzunlugu);
	
	n=diziuzunlugu;
	char dizi[n];
	int i=0;
	
	
	while(n>0){
		printf("%d. sehri giriniz : ",i+1);
		scanf("%s",&dizi[i]);
		i++;
		n--;
	}
	for(i=0;i<diziuzunlugu;i++){
		printf("Sehiler : %s",dizi);
	}
	
	
    return(0);
}
