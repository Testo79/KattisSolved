#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

int main() {
    int n , a ;
    cin >> n ;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a<0){
            sum=sum+1;
        }
    }
        cout <<sum ;
    
return 0;
}