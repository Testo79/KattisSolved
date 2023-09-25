#include <bits/stdc++.h>
using namespace std ;
int main (){
    int d ,c ;
    int num ;
    cin >> c >> d ;
    do{     
    int p =0 ;
    vector<int> v1 ;
    v1.clear() ;
        for(int i=0 ; i<c;i++){
            cin >> num ;
            v1.push_back(num);
        }
        for(int j=0 ;j<d;j++){
            cin >> num ;
            v1.push_back(num);
        }
        sort(v1.begin(),v1.end());
        for(int k =0 ; k<v1.size()-1;k++){
            if(v1.at(k)==v1.at(k+1)){
                p=p+1;
            }
        }
            cout << p<<endl ;
        cin >> c >> d ;
}
while(c!=0 ||d!=0);
  }

