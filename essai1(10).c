#include <stdio.h>
int main() {
	int a ,c,d, b , e;
scanf("%d %d" , &a , &b);
if (b-45 >0){
	c=b-45;
	printf("%d %d", a ,c);
}

if(b-45<0){
	if(a==0){
		a=23;
		d=b-45+60;
		printf("%d %d",a,d);
	}
	
	
	else {
		a=a-1;
		e=b-45+60;
		printf("%d %d",a,e);
		}
	}
		if (b-45==0){
		b=0;
		printf("%d %d" , a , b );
		}
}
