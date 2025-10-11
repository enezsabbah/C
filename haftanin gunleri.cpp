#include<stdio.h>
int main(){
	int a;
	printf("Kacinci gunu ogrenmek istiyorsunuz:");
	scanf("%d",&a);
	
	switch(a){
		case 1:
			printf("%d.gun pazartesi",a);
		break;
			
		case 2:
			printf("%d.gun sali",a);
		break;
		
		case 3:
			printf("%d.gun carsamba",a);
		break;
		
		case 4:
			printf("%d.gun persembe",a);
		break;
		
		case 5:
			printf("%d.gun cuma",a);
		break;
		
		case 6:
			printf("%d.gun cumartesi",a);
		break;
		
		case 7:
			printf("%d.gun pazar",a);
		break;
		
		default:
			printf("Oyle bir gun yok mlsf");						
		break;
	}
	
	
	
	
	
	
	
	
	return 0;
}
