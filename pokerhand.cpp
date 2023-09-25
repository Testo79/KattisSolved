#include <bits/stdc++.h>
using namespace std ;
int main(){
vector <char> v1 ;
string s1 , s2 ,s3 ,s4 ,s5;
int p1=0;int p2=0;int p3=0;int p4=0 ;int p5=0;
cin >> s1 >> s2 >> s3 >> s4 >>s5 ;
v1.push_back(s1[0]);v1.push_back(s2[0]);v1.push_back(s3[0]);v1.push_back(s4[0]);v1.push_back(s5[0]);
for(int j =0 ; j<v1.size();j++){
    if(v1.at(j)==s1[0]){
        p1=p1+1;
    }else if(v1.at(j)==s2[0]){
        p2=p2+1;
    }else if(v1.at(j)==s3[0]){
        p3=p3+1;
    }else if(v1.at(j)==s4[0]){
        p4=p4+1;
    }else if(v1.at(j)==s5[0]){
        p5=p5+1;
    }
     
}
int sum1=max(max(p1,p2),p3);int sum2=max(p4,p5);
cout <<max(sum1,sum2);
}