#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; ++i) {
      int a ,b ,c;
      scanf("%d %d %d",&a,&b,&c);
      if(a+c==b){
		  printf("does not matter \n");
	  }
	  if(a+c<b){
		  printf("advertise \n");
	  }
		  if(a+c>b){
			  printf("do not advertise \n");
		  }
        }
    }

		
	

