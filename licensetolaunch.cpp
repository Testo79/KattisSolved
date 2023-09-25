#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <math.h>
using namespace std ;
int main(){
    int n, a ;
    int sum=100000;
    int sum1;
    cin >> n ;
    for (int i =0 ; i<n ; i++){
        cin >>a;
        if(a<sum){
           sum=a;
           sum1=i;
        }
    }
    
    cout<<sum1 ;
    return 0;
    
}