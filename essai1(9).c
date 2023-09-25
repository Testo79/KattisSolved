#include <math.h>
#include <stdio.h>
int main(){
	int a , b , w , h ,i;	
	scanf("%d %d %d" , &a, &h,&w );
		for(i=0;i<a;i++){
		scanf("%d" , &b);
		if(b<=sqrt(w*w+h*h)){
			printf("DA \n");
		}
			else {
				printf("NE \n");}
			}
	return 0 ;
	
}
