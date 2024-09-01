#include<bits/stdc++.h>
using namespace std;
#define Fast    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve() {

    int l, r;
    cin>>l>>r;

    long long maximumLenght = 0;

    long long lo = 1;
    int long long hi = (r - l);

    if (l == r) {
        cout<<1<<endl;
        return;
    }

    if (r - l < 2) {
        cout<<2<<endl;
        return;
    }

    while (lo <= hi) {
        long long mid = (lo + hi) / 2;

        long long n = (mid * (mid + 1)) / 2;

        if ((l + n) <= r) {
            lo = mid + 1;
            maximumLenght = mid;
        }
        else {
            hi = mid - 1;
        }

    }

    cout<<maximumLenght + 1<<endl;


}

int main() {

    int t, a, b;

    cin>>t;

    while (t--) {
        solve();
    }

    return 0;
}