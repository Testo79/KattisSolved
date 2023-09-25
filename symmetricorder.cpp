#include <bits/stdc++.h>
using namespace std ;
int main(){
            int n=1; 
                   int p=1;

                   cin >> n;
    do{
       string s;
       vector<string> v;
       v.clear();
    for(int i=0;i<n;i++){
        cin >> s;
        v.push_back(s);
        }
        cout << "SET " << p << endl;
       for(int j=0;j<v.size();j++){
           if(j%2==0) {cout << v.at(j) << endl;}
           }
        for(int k=v.size()-1;k>0;k--){
           if(k%2==1) {cout << v.at(k) << endl;}
           }
       p++;
       cin >> n; 
        }
    
    while(n!=0);
    return 0;
}