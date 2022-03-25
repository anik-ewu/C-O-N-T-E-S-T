#include<bits/stdc++.h>
using namespace std;
int main() {

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string s;
    int testCases, n;
    cin>>testCases;

    while(testCases--) {

        cin>>n;
        cin>>s;
        int ones  = 0;
        int zeros = 0;

        for(int i = 0; i < n; i++) {
            ones  += s[i]=='1';
            zeros += s[i]=='0';
        }

        cout<<((zeros != ones and zeros%2 and ones%2)?"NO" : "YES")<<endl;
    }

    return 0;
}

