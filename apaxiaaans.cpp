#include <bits/stdc++.h>
using namespace std ;
int main(){
    string s1 ;
    cin >> s1 ;
    vector<char> v1(s1.begin(),s1.end());
    for(int i =0 ; i<v1.size()-1;i++){
        if(v1.at(i)==v1.at(i+1)){
            v1.erase(v1.begin()+i);
            i=i-1;
        }
    }
   for(int j=0;j<v1.size();j++){
       cout << v1.at(j);
   }
}