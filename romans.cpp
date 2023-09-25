#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>


using namespace std ; 
int main(){
    float a ; 
    cin >>a ;
    float b =a*1000*5280/4854;
    int d=b;
    if((b-d)*10>5){
        cout << d+1;
    }
    else if((b-d)*10<=5){
        cout << d;
    }

    
}
