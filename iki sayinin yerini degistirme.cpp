#include<stdio.h>
int main(){
	
	int a,b,c;
	printf("1.sayiyi giriniz:");
	scanf("%d",&a);
	printf("2.sayiyi giriniz:");
	scanf("%d",&b);
	printf("%d %d\n",a,b);
	
	c=a;
	a=b;
	b=c;
	printf("%d %d",a,b);
	
	/* printf("%d %d\n",a,b);
	   printf("%d %d",b,a); kisa cozum */
	
	
	return 0;
}
