#include <stdio.h>

int main(){
	
	char kitapad[30],yazar[20],sayfasayi[3],basimtarihi[4],basimevi[45],turu[15];
	printf("Kitap adi:  ");
	scanf("%s",kitapad);
	printf("Kitap Yazari :");
	scanf("%s",yazar);
	printf("Sayfa sayisi:");
	scanf("%s",sayfasayi);
	printf("Basim Tarihi:");
	scanf("%s",basimtarihi);
	printf("Basim Evi :");
	scanf("%s",basimevi);
	printf("Kitabin Turu: ");
	scanf("%s",turu);
	
	printf("Kitabin Adi:%s \n",kitapad);
	printf("Kitabin yazari:%s \n",yazar);
	printf("Kitabin sayfa Sayisi:%s \n",sayfasayi);
	printf("Kitabin Basim Yili:%s \n",basimtarihi);
	printf("Kitabin Basim Evi:%s \n",basimevi);
	printf("Kitabin Turu:%s \n",turu);

}
