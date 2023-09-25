#include <bits/stdc++.h>
using namespace std ;
int main(){
    int a , n ,n1,p;
int p1 =0;
    vector<int> v1 ;
    cin >>a;
    for(int i=0;i< a;i++){
        cin >> n ;
        v1.clear();
        for(int j=0;j<n;j++){
            cin >>n1;
            v1.push_back(n1);
            sort(v1.begin(),v1.end());
        
        }for (int k=0 ; k<v1.size()-1;k++){
            if(v1.at(k)!=v1.at(k+1) && k%2!=0){
                p=v1.at(k+1);
                p1=p1+1;
    
            }else if(v1.at(0)!=v1.at(1)){
                p=v1.at(0);
                p1=p1+1;
            }
           if(p1==0){
               p=p1;
           }
        }cout <<"Case #"<<i+1<<": "<<p<<endl;
    }
}