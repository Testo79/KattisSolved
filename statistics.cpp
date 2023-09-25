#include <bits/stdc++.h>
using namespace std ;
int main(){
int n , n1 ;
int p=0 ;
vector<int> v1 ;
    while(cin>>n){
        p=p+1;
        v1.clear();
        for(int i=0 ; i<n;i++){
        cin >> n1 ;
        v1.push_back(n1);
        sort(v1.begin(), v1.end());
    }cout << "Case "<<p<<": "<<v1.at(0)<<" "<<v1.at(v1.size()-1)<<" "<<v1.at(v1.size()-1)-v1.at(0)<<endl;
    }
        
    }

    
