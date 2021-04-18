#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
typedef long long ll;

ll dp[5007][1007];
string st1,st2;

ll go(ll i,ll j) {
    if(j == st2.size())return 1;
    if(i == st1.size())return 0;
    if(dp[i][j] != -1)return dp[i][j]%MOD;
    ll res = 0;
    if(st1[i] == st2[j]) {
        res = (go(i+1,j)%MOD + go(i+1,j+1)%MOD)%MOD;
    } else res = go(i+1,j)%MOD;
    return dp[i][j] = res%MOD;
}

void solve() {
    memset(dp,-1,sizeof(dp));
    ll ans = go(0,0);
    cout << ans << "\n";
}

int main() {
    //freopen("input.txt","r",stdin);
    int t;
    while(cin >> st1 >> st2)solve();

    return 0;
}
