#include<stdio.h>
int main(){
	
	int a,b,c;
	float d;
	printf("3 tane sayi giriniz:");
	scanf("%d %d %d",&a,&b,&c);
	
	d=(float)(a+b+c)/3;
	printf("Sayilarinizin ortalamasi:%f",d);
	
	
	return 0;
}
