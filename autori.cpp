#include <iostream>
#include <string.h>
#include <iomanip>
#include <stdio.h>
#include <math.h>
using namespace std ;
int main() {
    char str1[100] ; 
cin.getline(str1, 100);
cout<<str1[0] ;
for (int i=0;i< strlen(str1);i++){
    if(str1[i]=='-'){
        cout << str1[i+1];
    }
    
} 
return 0;
}