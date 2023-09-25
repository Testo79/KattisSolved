#include <iostream>
#include <string>
#include <stdio.h>
using namespace std ;
int main(){
    int sum=0 ;
    string  s2, s1 ;
    int n ;
    int domin[8]={11,4,3,20,10,14,0,0};
    int nondomin[8]={11,4,3,2,10,0,0,0};
    char aba[8]={'A','K','Q','J','T','9','8','7'};
    cin >>n>>s1; 
    for(int i =0 ; i<n*4;i++){
        cin >> s2;
        if(s2[1]==s1[0]){
            for(int j =0 ; j<8;j++){
                if(aba[j]==s2[0]){
                    sum =sum +domin[j];
                }
            }
        }else{
            for(int k=0;k<8;k++){
                if(aba[k]==s2[0]){
                    sum =sum +nondomin[k];
            }
        }
        
    }
    }cout << sum ;
}