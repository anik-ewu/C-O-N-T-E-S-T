#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;
#define sz              3000005
#define mod             1000000007
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

string s,p;
ll fact[]

ll binpow(ll b, ll p , ll m){
    if(p==0)return 1;
    ll res=binpow(b,p/2,m);
    res=(res*res)%m;
    if(p%2==1) res=(res*b)%m;
    return res;
}

ll binomialCoeff(ll n, ll k){
    ll res = 1;
    if (k>n-k)k = n - k;
    for (ll i = 0; i < k; ++i){
        res *= (n - i);
        res=res%mod;
        if(res)res /= (i + 1);
    }
    return res;
}

int main(){
    Fast;
    ll a,b,c, i,j,k, n,m,t, cs=1;

    cin>>t;
    while(t--){
        cin>>n>>m;
        ll ncr=binomialCoeff(n, m);
        ll tot=(ncr*binpow(2,n,mod))%mod;
        cout<<tot<<endl;
    }




    return 0;
}

