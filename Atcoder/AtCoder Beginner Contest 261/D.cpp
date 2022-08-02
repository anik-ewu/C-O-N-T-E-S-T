#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 5005;

int arr[N];
int brr[N];
ll dp[N][N];

ll getMaximumValue(int pos, int counter, int n) {

    if(pos > n)
        return 0;
    if(dp[pos][counter] != -1)
        return dp[pos][counter];

    ll b = getMaximumValue(pos+1, 0, n);
    ll a = arr[pos] + brr[counter+1] + getMaximumValue(pos+1, counter+1, n);

    return dp[pos][counter] = max(a, b);
}


int main(){

    int n, m, a, b;
    cin>>n>>m;

    for(int i = 1; i <= n; i++) cin>>arr[i];
    for(int i = 1; i <= m; i++) {
        cin>>a>>b;
        brr[a] = b;
    }

    memset(dp, -1, sizeof(dp));

    cout << getMaximumValue(1,0,n) <<endl;

    return 0;
}
