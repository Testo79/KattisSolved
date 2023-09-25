#include <iostream>
using namespace std ;
int main(){
    int a ; 
    cin >> a ;
   if(a==2 ||a==6 ||a==10){
       cout <<"Odd" ;
   }
   else if(a==4 || a==8){
       cout<<"Even" ;
   }
   else{
       cout<<"Either" ;
   }
   return 0;
   }