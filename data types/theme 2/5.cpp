#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k = 0;
    string s;
    getline(cin, s);
    int space = s.find(" ");
    while(space+1){
        k++;
        space = s.find(" ", space + 1);
    }
    cout << k + 1;
    return 0;
}