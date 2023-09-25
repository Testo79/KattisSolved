#include <bits/stdc++.h>
using namespace std ;
int main(){
int a ; 
cin >>a;
string s1 ;
for(int j=0 ; j<a+1 ;j++){
    string s2;
    string s3 ;
getline(cin ,s1);
int n1=s1.size() ;
s2=s1.substr(0,11);
if(s2=="Simon says "){
s3=s1.substr(11,n1-1);
cout << s3<<endl ;

}

}
return 0 ;
}