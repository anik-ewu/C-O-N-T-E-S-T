#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e18;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              105

int n, m;
ll arr[sz][sz];
ll dp[sz][sz];

ll solve(int i, int j){
    if(i>n || j>m)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    ll b,a=a=arr[i][j];
    a=max(a,solve(i+1,j+1));
    b=solve(i,j+1);
    return dp[i][j]=min(a,b);
}

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t;
    memset(dp, -1, sizeof(dp));
    cin>>n>>m;
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            cin>>arr[i][j];
        }
    }

    cout<<solve(1,1)<<endl;

    return 0;
}

