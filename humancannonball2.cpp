#include <bits/stdc++.h>
#include <math.h>
using namespace std ;
int main(){
    int a ;
    cin >>a ;
    for(int i =0 ; i< a ;i++){
            float v0, teta,x1,h1,h2;
   cin >> v0>>teta >>x1 >>h1>>h2 ;
float t=x1/(v0*cos(teta*M_PI/180) ) ;
  float sum=v0*t*sin(teta*M_PI/180)-0.5*9.81*t*t ;
    if(sum>=h1+1 && sum<=h2-1){cout <<"Safe"<<endl  ;}
  else{cout <<"Not Safe"<<endl;}
}
    return 0 ;

}