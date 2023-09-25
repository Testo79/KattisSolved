#include <iostream>
#include <string>
#include <stdio.h>
using namespace std ;
int main(){
 float a =0;
 float b=0;
 float d =0;
 float e =0;
 string s1 ;
 cin >> s1 ;
 for (int i =0 ; i< s1.length();i++){
     if(int(s1[i])==95){
         a=a+1;
     }
   else if(int(s1[i])>=97 && int(s1[i])<=122){
         b=b+1;
     }
   else if(int(s1[i])>=65 && int(s1[i])<=90){
       d=d+1;
 }
else {
    e=e+1;
}
 }
 float a1 =a/s1.length();
 float b1 =b/s1.length();
 float d1 =d/s1.length();
 float e1 =e/s1.length();
printf("%.16f \n",a1);
printf("%.16f \n",b1);
printf("%.16f \n",d1);
printf("%.16f \n",e1);

 }