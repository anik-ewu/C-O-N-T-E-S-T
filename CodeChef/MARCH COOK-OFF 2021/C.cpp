#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll                inf = 1e9;

#define all(x)          (x).begin(), (x).end()
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int               mod=1e9+7;
const int               sz =2e5+5;

int arr[sz];

void solve(){
    int a,b, n,m,k, i,j;
    ll sum=0;
    cin>>n>>k;
    for(i=1; i<=n; i++)cin>>arr[i];
    for(i=1; i<=n; i++)sum+=arr[i];

    ll mx=INT_MAX;
    ll x=0;
    for(i=1; i<=n; i++){
        if(i<=k){
            x+=arr[i];
        }
        else{
            x+=arr[i];
            x-=arr[i-k];
        }
        if(i>=k){
            mx=min(mx, x);
        }
    }
    ll res=((mx*1LL*(mx+1))/2)+(sum-mx);
    cout<<res<<endl;    

}

int main(){
    
    Fast;   
    read(x); write(x);

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

