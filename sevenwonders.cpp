#include <bits/stdc++.h>
using namespace std ;
int main(){
  vector<char> v1;
  vector<char> v2;
  vector<char> v3;
  string s1;
  cin >> s1 ;
  int sum ;
  int p=0;
  for(int i=0;i<s1.size();i++){
      if(s1[i]=='T'){
          v1.push_back('T');
      }
      else if(s1[i]=='G'){
          v2.push_back('G');
      }
      else if(s1[i]=='C'){
          v3.push_back('C');
      }
      
  }
  sum=(v1.size())*(v1.size())+(v2.size())*(v2.size())+(v3.size())*(v3.size());
while(v1.size()!=0 && v2.size()!=0 && v3.size()!=0){
    p=p+1;
    v1.erase(v1.begin());
    v2.erase(v2.begin());
    v3.erase(v3.begin());

}
sum=sum+p*7;
cout << sum ;
}
  
  