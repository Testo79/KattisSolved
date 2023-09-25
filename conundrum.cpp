#include <iostream>
#include <string>
#include <stdio.h>
using namespace std ;
int main(){
    string s1;
    cin >> s1 ;
    int a =0;
    for(int i=0;i<s1.length();i++){
        a=a+1;
        if((i%3==0 && s1[i]=='P')||(i%3==1 && s1[i]=='E')||(i%3==2 &&s1[i]=='R')){
            a=a-1;
        }
            
       
    }
    cout<< a ;
}