#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std ;


int main(){
    int a , b,p;
    int a1 =0 ;
    cin >> a>>b ;
    char s1[6] ;
    int result =0 ;
    for (int i =0;i<b;i++){
        scanf("%s %d",&s1,&p);
        if(s1[0]=='e'){
        if(p+result>a){
            a1=a1+1;
            
        }
        else{
            result =result +p;
        }
        }
        else {
            result=result-p;
        }
    }
cout <<a1;
}