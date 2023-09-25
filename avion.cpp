#include <bits/stdc++.h>
using namespace std ;
int main(){
    string s1 ;
    int p =1 ;
    for(int i=0 ; i< 5 ;i++){
        cin>>s1 ;
        for(int j =0 ;j<s1.length()-2;j++){
            if(s1[j]=='F'&& s1[j+1]=='B'&& s1[j+2]=='I'){
                cout << i+1<<" ";
                p=0;
            }
          
        }
    }
    if(p==1){
        cout<<"HE GOT AWAY!" ;
    }
  return 0 ; 
}