#include <iostream>
#include <string>
using namespace std;

int main(){
    int b;
    string a ;
    cin >>a >> b ;
    if((a=="OCT" && b==31) || (a=="DEC"&& b==25)) {
        cout <<"yup"<<endl;
        
    }
    else{
        cout<<"nope";
    }
}