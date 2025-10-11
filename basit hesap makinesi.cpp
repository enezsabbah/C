#include<stdio.h>
int main(){
	
	int islem,a,b,c;
	printf("1.Toplama\n");
	printf("2.Cikarma\n");
	printf("3.Carpma\n");
	printf("4.Bolme\n");
	printf("5.Mod Alma\n\n");
	
	printf("Yapmak istediginiz islemi seciniz:");
	scanf("%d",&islem);

	
	printf("\n%d.islemi sectiniz\n\n",islem);
	
	printf("1.sayiyi giriniz:");
	scanf("%d",&a);
	printf("2.sayiyi giriniz:");
	scanf("%d",&b);
	
	switch(islem){
		case 1:
			printf("\nToplama islemi sonucu:%d",a+b);
		break;
		case 2:
			printf("\nCikarma islemi sonucu:%d",a-b);
		break;
		case 3:	
			printf("\nCarpma islemi sonucu:%d",a*b);
		break;
		case 4:
		    printf("\nBolme islemi sonucu:%d",a/b);
		break;
		case 5:
			printf("\nMod alma islemi sonucu:%d",a%b);
		break; 			
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
