#include <stdio.h>
int main(){
	int a , b ;
	scanf("%d %d",&a ,&b);
	//quad1 =++ quad2=-+ quad3=-- quad4=+-
	if(a<0 && b<0){
		printf("3");
	}
	if(a>=0 && b>=0){
		printf("1");
	}
	if(a>0 && b<0){
		printf("4");
	}
	if(a<0 && b>0){
		printf("2");
	}
	}
	
