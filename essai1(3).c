#include <stdio.h>
#include <math.h>
int puiss1(i){
	if (i==0){
	return 3;
}
	else {
	return pow(2,i)+puiss1(i-1);
}
}
int main(){
	
	int i , a , result ;
	scanf("%d",&a) ;
	result=puiss1(a-1)*puiss1(a-1);
printf("%d",result);
}
		
	
	
