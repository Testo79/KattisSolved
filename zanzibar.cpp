#include <bits/stdc++.h>
using namespace std ;
int main(){

    int n;
    int a=1;
    vector<int> v;
    cin >> n;
    for(int i=0;i<n;i++){
        int p=0;
        v.clear();
        cin >> a;

        do{
            
            v.push_back(a);

                                    cin >> a;

            }
        
        while(a!=0);
                    for(int j=0;j<v.size()-1;j++){
            if(v.at(j)*2<v.at(j+1)) p+=v.at(j+1)-v.at(j)*2;
            }
            cout << p << endl;
        }
    
    return 0;
}