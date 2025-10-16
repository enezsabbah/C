#include<stdio.h>
int main(){

	int islem,a,b;
	printf("1.Toplama Islemi");
	printf("\n2.Cikarma Islemi");
	printf("\n3.Carpma Islemi");
	printf("\n4.Bolme Islemi");
	printf("\n5.Mod Alma Islemi\n");		

	printf("\nYapmak istediginiz islem numarasini giriniz:");
	scanf("%d",&islem);
	
	printf("\n1.sayiyi giriniz:");
	scanf("%d",&a);
	printf("\n2.sayiyi giriniz:");		
	scanf("%d",&b);
	
	if(islem==1)
		printf("\nToplama islemi sonucu:%d",a+b);
		
	if(islem==2)
		printf("\nCikarma islemi sonucu:%d",a-b);
	
	if(islem==3)
		printf("\nToplama islemi sonucu:%d",a*b);
	
	if(islem==4)
		printf("\nBolme islemi sonucu:%d",a/b);

	if(islem==5)
	printf("\nMod Alma islemi sonucu:%d",a%b);









	return 0;
}

