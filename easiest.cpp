#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <math.h>
using namespace std ;
int dsum(int n) {
            int p{};

    while(n>0) {
        int s=n%10;
        n=n/10;
        p +=s;
        }
    return p;
    }
  
   
   int main(){

       
int b=1 ;
   while(b!=0) {
       cin >>b;
       if (b!=0){
       for (int i =11 ;i<10000;i++){
           if (dsum(b)==dsum(b*i)){
              cout<<i<<endl;
               
                          break ;

           }

       }  
       }
   }    
   return 0;
   }