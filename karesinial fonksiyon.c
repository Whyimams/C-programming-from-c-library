#include <stdio.h>

int karesinial(int x);

int main(){
	int sayi;
	scanf("%d",&sayi);
	printf("%d",karesinial(sayi));
	
	return 0;
	
}

int karesinial( int x){
	
	x*=x;
	
	return x;
}
