#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std ;
int main(){
    string s1 , s2 ;
   int a ;
   cin >>a;
   for(int i =0;i<a;i++){
        string s3 ;
cin>>s1>>s2;
cout<<s1<<endl<<s2<<endl;
        for(int j=0 ;j<s1.length();j++){
            if(s1[j]==s2[j]){
                s3=s3+".";
            }
            else {
                s3=s3+"*";
            }
        }
        cout<<s3;
        cout <<endl<<endl;

    }
return 0 ;
}
