#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod  = 1e9+7;
ll binpow(ll b, ll p){
    if(p==0)return 1;
    ll res=binpow(b,p/2);
    res=(res*res)%mod;
    if(p%2==1) res=(res*b)%mod;
    return res;
}

int main(){

    int t, a, b, m;
    cin>>t;
    while(t--){
        cin>>a>>b;
        cout<<binpow(a,b)<<endl;
    }
    return 0;
}
