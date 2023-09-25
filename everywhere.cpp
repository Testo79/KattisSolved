#include <stdio.h>
#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std ;


int main()
{
   int a , b ;
string s1 ;
cin >> a ;


for(int i=0;i<a;i++ ){
    vector<string> v1 ;

       cin >> b ; 
       for(int j =0;j<=b;j++){
       getline(cin,s1);
       
       if (std::find(v1.begin(), v1.end(), s1) == v1.end() ){
               v1.push_back(s1);
           }
       }cout <<v1.size()-1<<endl;
   }
}

