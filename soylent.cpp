#include <bits/stdc++.h>
using namespace std ;
int main(){
int n , n1;double n2;
cin >> n;
for (int i=0 ; i< n ; i++){
    cin >> n1 ;
    n2=n1/400 ;
    if(n1%400!=0){
        cout <<n2+1<<endl;
    }
    else{
    cout <<n2<<endl ;
    
    }
}
}
