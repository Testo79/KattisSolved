#include <stdio.h>
int main() {
	int a , b ,i , c;
	int result=0;
	scanf("%d",&a);
	scanf("%d",&b) ;
	for(i=0;i<b ; i++){
		scanf("%d",&c) ;
		result =result +c ;
	}
    printf("%d",a*b-result +a);
	return 0 ;
}
 
