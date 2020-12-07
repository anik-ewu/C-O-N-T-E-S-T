#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              3000005

ll arr[sz], brr[sz];

int main(){
    Fast;///using Fast I/O
    ll a,b,c, i,j,k, t,n,m,cs=1;

    cin>>t;
    while(t--){
        cin>>n>>m;

        priority_queue< pair< ll , ll > > pq;
        for(i=1; i<=n; i++){
            cin>>arr[i];
        }

        for(i=1; i<=m; i++){
            cin>>brr[i];
            pq.push({0,-brr[i]});
        }
        sort(arr+1,arr+n+1);
        reverse(arr+1,arr+n+1);

        ll ans=0;
        for(i=1; i<=n; i++){
            a=pq.top().first*-1;
            b=pq.top().second*-1;
            pq.pop();
            pq.push({-(a+b), -b});
            ll T=a+arr[i];
            ans=max(ans,T);
        }
        cout<<"Case "<<cs++<<": "<<ans<<endl;

    }
    return 0;
}

