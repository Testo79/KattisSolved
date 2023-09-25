#include <bits/stdc++.h>
using namespace std ;
int main(){
    int a , b , c ;
    cin >> a>>b>>c ;
    int sum =a*3+b*2+c ;
    if(sum>=8){
        cout <<"Province or Gold" ;
    }
    else if(sum>=6 && sum<8){
        cout <<"Duchy or Gold";
    }
    else if (sum<=1){
        cout <<"Copper";
    }
    else if(sum>=3 && sum<5){
        cout<<"Estate or Silver";
    }
    else if(sum==2){
        cout<<"Estate or Copper";
    }
    else if(sum==5){
        cout <<"Duchy or Silver";
    }
}