#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,s1;
    cin >> s;
    s1=s;
    reverse(s.begin(), s.end());

    if(s==s1){
        cout << "yes";

    }
    else{
        cout << "no";
    }
    }
       