#include<bits/stdc++.h>
using namespace std;

int main() {
    

    string s;
    cin>>s;
    int length = s.size();
    int minHugNeeded = 0;

    for (int i = 0; i < length / 2; i++) {
        minHugNeeded += (s[i] != s[length - i - 1]);
    }

    cout<<minHugNeeded<<endl;

    return 0;
}