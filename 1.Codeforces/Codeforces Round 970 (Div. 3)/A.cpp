#include<bits/stdc++.h>
using namespace std;
#define Fast    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


void solve() {

    int t, a, b;
    bool okay = true;
    cin>>a>>b;
    if (a % 2) {
        okay = false;
    }
    else {
        
        b = b%2;
        if (b & !a) {
            okay = false;
        }
    }

    if (okay) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}

int main() {

    int t, a, b;

    cin>>t;

    while (t--) {
        solve();
    }

    return 0;
}