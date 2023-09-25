#include<bits/stdc++.h>
#define pb push_back

using namespace std ;
int main(){
    
    int a,b,c,d;
    vector<int> v;
    cin >> a >> b >> c >> d;
    v.pb(a);
    v.pb(b);
    v.pb(c);
    v.pb(d);
    sort( v.begin(),v.end() );
    cout << v.at(0)*v.at(2);
    
return 0;
}