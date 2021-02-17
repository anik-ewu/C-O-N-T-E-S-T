#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {

    ll a,b,q,p,k, n,m, i,j;
    vector<ll>v;
    scanf("%lld%lld%lld",&n,&m,&q);
    for(i=1; i<=n; i++) {
        scanf("%lld",&a);
        v.push_back(a);
    }
    
    while(q--) {
        scanf("%lld%lld",&p,&k);
        p=p*v[k-1];
        ll tot=(p/m);
        if(tot%2==0) {
            printf("%lld\n",p%m);
        } else {
            printf("%lld\n",m-(p%m));
        }
    }


}

int main() {
    int t;
    solve();

    return 0;
}