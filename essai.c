 #include <stdio.h>

int main(){
	int result=0 ; 
	int i;
	int j;
	for(i=1;i<6;i++){
		int a ,b,c ,d;
scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a+b+c+d>result){
		result=a+b+c+d;
		j=i;
	}
}
	printf("%d %d",j,result);
	return 0;
}

