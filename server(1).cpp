#include <bits/stdc++.h>
using namespace std ;
int main(){
int n , b,n1 ;
int p=0;
int p1=0;
cin >> n>>b ;
for(int i =0;i<n ;i++){
    cin >> n1;
    if(p+n1<=b){
        p=p+n1;
        p1=p1+1;
    }else if(p+n1>=b){
        break;
    }
}
    cout<< p1 ;
}