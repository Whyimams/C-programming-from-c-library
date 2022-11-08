#include <stdio.h>
#include <stdlib.h>
int main(){
	int i;
	int upper=0,lower=0;
	char ch[150];
	printf("Bir cumle giriniz:\n");
	gets(ch);
	for(i=0;ch[i]!=0;i++){
		if(ch[i]>='A'&& ch[i]<='Z'){
			upper++;
		}
		else if(ch[i]>='a'&&ch[i]<='z'){
			lower++;
		}
	}
	printf("Büyük Harf sayýsý:%d \n",upper);
	printf("Küçük harf sayýsý :%d\n ",lower);
	getch();
	return 0;
}
