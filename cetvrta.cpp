#include <bits/stdc++.h>
#include <math.h>
using namespace std ;
int main(){
    int a ,b , c , d,e ,f ;
    cin >> a >> b>> c>>d>>e>>f ;
    int n1=a , n2=b ;
    if(a==c){
        n1 =e;
    }
    else if(a==e){
        n1 =c;
        
    }
    if(b==d){
        n2=f;
    }
    else if(b==f) {
        n2=d;
    }

cout << n1 <<" "<<n2;
}