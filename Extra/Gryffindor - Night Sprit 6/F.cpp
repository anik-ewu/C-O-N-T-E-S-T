#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;
long long dp[N];
const int mod = 1e9 + 7;

int main(){

    Fast;
    int a, b, t=1, n , m;

    dp[0] = 1;
    for(int i = 1; i <= 100001; i++)
        dp[i] = dp[i - 1] * 1LL * 2 % mod;

    cin>>t;
    while(t--){
        cin>>n;
        cout<<dp[n-1]<<endl;
    }

    return 0;
}
