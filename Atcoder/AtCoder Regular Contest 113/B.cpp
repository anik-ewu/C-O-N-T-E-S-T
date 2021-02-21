#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define mod             10
#define sz              3000005

ll binpow(ll b, ll p , ll m){
    if(p==0)return 1;
    ll res=binpow(b,p/2,m);
    res=(res*res)%m;
    if(p%2==1) res=(res*b)%m;
    return res;
}

long long int phi(long long int n){
    int phi=n;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
            }
            phi-=phi/i;
        }
    }
    if(n>1){
        phi-=phi/n;
    }
    return phi;
}

void solve(){

    int a,b,c, res;
    cin>>a>>b>>c;
    res=binpow(b, c, 4);
    if(res==0)res=4;
    res=binpow(a, res, 10);
    cout<<res<<endl;

}

int main(){
    Fast;///using Fast I/O
    
    //read(x); write(x);

    int multitest=0;
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

