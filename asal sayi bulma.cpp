#include<stdio.h>
int main(){
	int sayi,a,b=1; //1 : asal
	printf("Asal olup olmadigini kontrol etmek istediginiz sayiyi giriniz:");
	scanf("%d",&sayi);
	
	if(sayi<=1)
		b=0;
	else{
		for(a=2;a<=sayi/2;a++){
			if(sayi%a==0){
				b=0;
				break;
			}
			else{				
				b=1;
				}
			}
		}
		
	 
	switch(b){
		case 0:
			printf("%d sayisi Asal degildir",sayi);
		break;
		case 1:
			printf("%d sayisi Asaldir",sayi);
	break;			
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
