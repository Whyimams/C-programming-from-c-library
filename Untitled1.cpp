#include <stdio.h>


int main(){
	
int sayi1,sayi2,sonuc;
char islem;
printf("sayi gir\n");
scanf("%d",&sayi1);
scanf("%d",&sayi2);
printf("islemi girin\n");
scanf("%s",&islem);
switch(islem)
{
	
	case '+' :
		sonuc=sayi1+sayi2;
		printf("sonuç: %d",sonuc);
		break;
	case '-':
		sonuc=sayi1-sayi2;
		printf("sonuç : %d",sonuc);
		break;
	case '*':
		sonuc=sayi1*sayi2;
		printf("sonuç= %d",sonuc);
		break;
	case '/':
		sonuc=sayi1/sayi2;
		printf("sonuç= %d",sonuc);
		break;
		
}
return 0;
}
