#include <stdio.h>
int main(){
	int a ; 
	float b ,c ;
	float result =0.0;
	scanf("%d",&a);
	for(int i=0; i<a ; i++){
		scanf("%f %f",&b,&c );
        result=result +b*c ;
	}
	printf("%f",result);
}
