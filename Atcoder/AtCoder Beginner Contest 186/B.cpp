#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              105

int arr[sz][sz];

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    int mn=inf;

    cin>>n>>m;
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            cin>>arr[i][j];
            mn=min(mn, arr[i][j]);
        }
    }
    int ans=0;
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            ans+=(arr[i][j]-mn);
        }
    }
    cout<<ans<<endl;







    return 0;
}

