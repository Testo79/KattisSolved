#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <math.h>
using namespace std ;
int main() {
    

int i ,d ;
double result =0;
int sum=0 ;
cin >> i ;

for(int j =0; j<i;j++) {
 cin >> d;
 if (d>=0){
      result=result+d;
     sum=sum+1;
     
 }
}
cout << setprecision(17)<<result/sum;
return 0 ;
}