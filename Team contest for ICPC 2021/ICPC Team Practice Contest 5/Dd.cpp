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

string s;

ll binpow(ll b, ll p , ll m){
    if(p==0)return 1;
    ll res=binpow(b,p/2,m);
    res=(res*res)%m;
    if(p%2==1) res=(res*b)%m;
    return res;
}

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;
    cin>>s>>c;

    reverse(s.begin(), s.end());
    ll res=1;
    for(i=0; i<s.size(); i++){
        if(s[i]=='1'){
            res=(binpow(1+c, i, mod)+c*res%mod)%mod;
        }
    }
    cout<<res<<endl;

    return 0;
}


