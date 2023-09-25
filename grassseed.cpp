#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main(){
    double a ,  c ,d;
    int b;
    double result;
    cin >>a >>b ;
    for(int i =0 ;i<b;i++){
        cin>>c >> d ;
        result =result +c*d*a;
    }
printf("%.7lf",result) ;   }