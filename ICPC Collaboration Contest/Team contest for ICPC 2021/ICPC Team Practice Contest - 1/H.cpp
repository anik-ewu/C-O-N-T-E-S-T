#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
const ll inf = 1e9;

#define mod             8589934592
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              3000005

ll binpow(ll b, ll p , ll m){
    if(p==0)return 1;
    ll res=binpow(b,p/2,m);
    res=(res*res)%m;
    if(p%2==1) res=(res*b)%m;
    return res;
}

int main(){
    ll a,b,c, i,j,k, t,n,m, cs=1;

    cin>>t;
    while(t--){
        cin>>n;
        ll ans=binpow(2,n,mod)-1;
        if(ans<0)ans+=mod;
        cout<<"Case :"<<cs++<<" "<<ans<<endl;
    }





    return 0;
}

