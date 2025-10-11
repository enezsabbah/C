#include<stdio.h>
int main(){
	
	int a,b,c,d,e,f;
	printf("3 basamakli bir sayi giriniz:");
	scanf("%d",&a);
	
	b=a/100;
	c=a%100;
	d=c/10;
	e=c%10;
	f=b+d+e;
	printf("Sayinizin basamaklari toplami:%d",f);
	
	
	
	return 0;
}
