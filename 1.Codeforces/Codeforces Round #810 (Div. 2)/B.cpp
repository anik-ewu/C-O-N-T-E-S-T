#include<bits/stdc++.h>
using namespace std;

#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int arr[100005];
int cnt[100005];

int main() {

    Fast;

    int t, n, m, a, b;

    cin>>t;
    while(t--) {
        cin>>n>>m;

        for(int i=1; i<=n; i++)
            cin>>arr[i];

        vector < pair< int, int > > vp;
        memset(cnt, 0, sizeof(cnt));

        for(int i=1; i<=m; i++){
            cin>>a>>b;
            cnt[a]++;
            cnt[b]++;
            vp.push_back({a,b});
        }

        int res = 0;
        if(m%2) {

            res = INT_MAX;

            for(int i=1; i<=n; i++){
                if(cnt[i]%2) {
                    res = min(res, arr[i]);
                }
            }

            for(int i=0; i<m; i++) {
                a = vp[i].first;
                b = vp[i].second;
                if(cnt[a]%2== 0 and cnt[b]%2==0) {
                    res = min(res, arr[a]+arr[b]);
                }
            }

        }
        cout<<res<<endl;
    }

    return 0;
}
