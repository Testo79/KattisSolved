#include <iostream>
#include <string>
#include <stdio.h>
using namespace std ;
    int getSum(int n) 
    {  
    int sum = 0; 
    while (n != 0) 
    { 
     sum = sum + n % 10; 
     n = n/10; 
    }  
 return sum; 
    }
int main(){
 int a , b , n ;
 int d =0;
 int d1=0 ;
 cin >> a >> b >> n;
 for(int j=a;j<=b;j++){
     if(getSum(j)==n){
         d1=j;
         break ;
     }

     }
 for(int i=b;i>=a;i--){
     if(getSum(i)==n){
         d=i;
         break ;
     }
     
 }
 cout<<d1<<endl;
 cout<< d<<endl;
 } 