#include <bits/stdc++.h>
using namespace std ;
int main(){
int n ;
int A=0 ;int B=0; ;int C=0;
cin >> n ; 
char v0[n];
cin >> v0 ;
    char v1[3]={'A','B','C'};
    char v2[4]={'B','A','B','C'};
    char v3[6] ={'C','C','A','A','B','B'};
    for(int i =0; i<n ; i++){
        if(v0[i]==v1[i%3]){
            A=A+1;
        }
        if(v0[i]==v2[i%4]){
            B=B+1;
        }
        if(v0[i]==v3[i%6]){
            C=C+1;
        }
    }
    if(A>C){
        if(A>B){
        cout<<A<<endl<<"Adrian";}
        else if(A==B){
        cout<<A<<endl<<"Adrian"<<endl<<"Bruno";}
        }
    
     if(B>A ){
        if(B>C){
    cout <<B<<endl<<"Bruno";
    }else if(B==C){
        cout <<B<<endl<<"Bruno"<<endl<<"Goran";
    }
    }
     if(C>B){if(C>A){
        cout <<C<<endl<<"Goran";
    }
    else if(C==A){
        cout<<C<<endl<<"Adrian"<<endl<<"Goran";
    }
    }
    else if (A==B && A==C) {
        cout<<A<<endl<<"Adrian"<<endl<<"Bruno"<<endl<<"Goran";
    }
        
}