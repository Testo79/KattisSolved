#include <stdio.h>
int fact(n) {
	if(n==0){
		return 1;
		}
		else{
			return n*fact(n-1);
			}
		}
int main(int argc, char **argv)
{int result ;

	int a;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		int b;
		scanf("%d" ,&b);
		result =fact(b)%10;
		printf("%d \n" ,result);
	}
	return 0;
}

