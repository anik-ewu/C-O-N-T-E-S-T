#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              1005
#define i64             unsigned long long
int arr[sz];
int brr[sz];
int crr[sz];

i64 dp[1001][1003];
i64 nCr(int n, int r){
    if(n==r) return dp[n][r] = 1;
    if(r==0) return dp[n][r] = 1;
    ///if(n==0) return dp[n][r] = 0;
    if(r==1) return dp[n][r] = (i64)n%mod;
    if(dp[n][r]) return dp[n][r]%mod;
    return dp[n][r] = (nCr(n-1,r) %mod + nCr(n-1,r-1)%mod)%mod;
}

void solve(){

    int a,b, n,m, i,j,r;
    cin>>n>>r;
    for(i=1; i<=n; i++){
        cin>>arr[i];
    }
    sort(arr+1, arr+n+1);
    reverse(arr+1, arr+n+1);

    ll ans=1;

    if(arr[1]==arr[n]){
        r = (r<n-r)? r : n-r;
        ans=nCr(n,r);
    }
    else{
        a=b=0;
        for(i=r+1; i<=n; i++)a+=(arr[r]==arr[i]);
        for(i=r; i>=1; i--)b+=(arr[r]==arr[i]);
        ans=nCr(a+b, b);
        ans=max(ans, 1LL);

    }
    cout<<ans<<endl;

}

int main(){
    Fast;///using Fast I/O
    int multitest=1;
    if(multitest){
        int tc;
        cin>>tc;
        while(tc--)
            solve();
    }
    else
        solve();

    return 0;
}
