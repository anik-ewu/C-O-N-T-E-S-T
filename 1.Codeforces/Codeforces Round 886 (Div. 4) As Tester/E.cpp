#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Fast    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 2e5+5;
ll arr[N];

ll findCardboardArea(int n, ll mid, ll c) {
    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        ll val = (2 * mid + arr[i]);
        sum += (val * val);
        if (sum > c) {
            return sum;
        }
    }
    return sum;
}

int main(){

    ll a, b,c, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>n>>c;
        for (int i = 1; i <= n; i++) {
            cin>>arr[i];
        }

        int res = 1;

        ll low = 1;
        ll high = 1000000009;

        while (low <= high) {
            ll mid = (low + high) / 2;
            long long totalCardboardArea = findCardboardArea(n, mid, c);
            if (totalCardboardArea == c) {
                res = mid;
                break;
            }
            if (totalCardboardArea >= c) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        cout<<res<<endl;
    }

    return 0;
}
