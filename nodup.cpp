#include <bits/stdc++.h>
using namespace std ; 
int main(){

    string line;
    getline(cin, line);
    int len = line.length();
    vector<string> subArray;

    for (int j = 0, k = 0; j < len; j++) {
        if (line[j] == ' ') {
            string ch = line.substr(k, j - k);
            k = j+1;
            subArray.push_back(ch);
        }
        if (j == len - 1) {
            string ch = line.substr(k, j - k+1);
            subArray.push_back(ch);
        }
    }
    sort(subArray.begin(),subArray.end());
            string s1 ="yes";
    for(int i =0 ; i< subArray.size();i++){
        if(subArray[i]==subArray[i+1]){
            s1="no";
        }
      
    }
 cout << s1 ;
    return 0;
}


   
    

    
   


    

