#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main(){
    int a ; 
    double b , c ;
    double s{} ;
    cin >> a;
    for(int i=0;i<a;i++){
        cin >>b >>c ;
        s=60*b/c;
        printf("%.4lf %.4lf %.4lf \n",s-60/c,s,s+60/c );

    }
 return 0;   
    }