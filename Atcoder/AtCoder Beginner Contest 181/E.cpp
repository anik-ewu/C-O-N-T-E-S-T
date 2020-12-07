///cumulative sum, binary search

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

ll l[sz], r[sz];
ll arr[sz], brr[sz];

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>n>>m;
    for(i=1; i<=n; i++)cin>>arr[i];
    for(i=1; i<=m; i++)cin>>brr[i];

    sort(arr+1, arr+n+1);
    for(i=2; i<=n; i+=2){
        l[i]=(arr[i]-arr[i-1])+l[i-2];
    }
    for(i=n-1; i>=1; i-=2){
        r[i]=(arr[i+1]-arr[i])+(r[i+2]);
    }

    ll ans, sum;
    ans=inf;
    for(i=1; i<=m; i++){
        int idx=lower_bound(arr+1, arr+n+1, brr[i])-arr;
        ///what_is(idx);
        sum=0;
        if(idx%2==0){
            if(idx-2>0){
                sum+=l[idx-2];
            }
            sum+=(brr[i]-arr[idx-1]);
            sum+=r[idx];
        }
        else{
            if(idx-1>0){
                sum+=l[idx-1];
            }
            sum+=abs(arr[idx]-brr[i]);
            if(idx+1<=n){
                sum+=r[idx+1];
            }
        }
        ///what_is(sum);
        ans=min(ans,sum);
    }
    cout<<ans <<endl;

    return 0;
}

