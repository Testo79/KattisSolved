#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <math.h>
using namespace std ;
int main() {
double a1{},b1{},v1{},v2{},area{},l{};
    int n;
    cin >>n;
for (int i =0;i<n;i++){
        cin >>a1>>b1;
    area=((a1-v1)*(b1+v2))/2;
    if (i==0){
    area=0;
        }
    l+=area ;
    v1=a1;
    v2=b1;
}
cout << setprecision(7) <<l/1000 ;
return 0;
}
 
   