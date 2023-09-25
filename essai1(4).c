#include <stdio.h>
int puiss(a, n ) {
	if(n==0) {
		return 1 ;
	}
	else{
		return a*puiss(a,n-1) ;
	}
}
int main(){
	int a ;
	int b ;
	int result=0 ;
	int c;
	
	scanf("%d" ,&a );
	for(int i =0 ; i<a ; i++) {
		scanf("%d" ,&b);
		result =result + puiss(b/10,b%10) ;
	}
	

printf("%d",result);
}
