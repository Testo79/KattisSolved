#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
    int a , b ;
    int n1 ;
    int n2;
    int n3;
    cin >> a >> b ;
    n1=(a/10)%10 ;
    n2=(a/100);
    n3=n1*10 + n2 +(a%10)*100 ;
int n4 ;
    int n5;
    int n6;
    n4=(b/10)%10 ;
    n5=(b/100);
    n6=n4*10 + n5 +(b%10)*100 ;


cout << max(n6,n3);
return 0 ;
}