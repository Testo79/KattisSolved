#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
    int a , b ; 
    cin >> a >> b ;
    int c =abs(a-b) +1 ;
    for(int i =1 ; i<c+1; i++){
        int d =min(a,b)+i ;
cout<<d<<endl;
    }
    return 0 ;
    }