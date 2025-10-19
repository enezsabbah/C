#include<stdio.h>
#include<math.h>

int main(){
	
	int a,b,c,d,e,x1,x2;
	printf("x^2'nin katsayisini giriniz:");
	scanf("%d",&a);
	
	printf("\nx'in katsayisini giriniz:");
	scanf("%d",&b);
	
	printf("\nSabit sayiyi giriniz giriniz:");
	scanf("%d",&c);
	
	d=(b*b)-4*a*c;
	e=sqrt(d);
	x1=(-b+e)/2*a;
	x2=(-b-e)/2*a;
	
	if(d>0)
		printf("\nPolinomun kokleri x1=%d ve x2=%d'dir.",x1,x2);
		
	if(d==0)
		printf("\nPolinomun kokleri esittir ve %d'dir.",x1);
	
	else
		printf("\nPolinomun reel sayilari kumesinde koku yoktur.");
	
	
	
	
	
	
	
	
	
	return 0;
}
