#include <bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    while(n!=-1){
       
    
        int sum =0 ;
        cin >> n ;
        int a , b; 
        int s1=0 ;
        for (int i =0 ; i<n ; i++){
            cin >> a >> b;
            sum=sum+a*(b-s1);
            s1=b;
        }
        if(n==-1){
            exit(0);
        }
        cout << sum<<" miles"<<endl ;
         
    }  
} 