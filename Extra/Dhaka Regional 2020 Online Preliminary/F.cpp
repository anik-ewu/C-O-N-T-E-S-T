#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll                inf = 1e9;
const int               mod=1e9+7;

#define all(x)          (x).begin(), (x).end()
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int               sz =2e5+5;


int main(){

    Fast;
   // read(x); write(x);

    ll t, a, b, m;
    cin>>t;
    while(t--){
        cin>>a>>b>>m;
        int cnt=0;
        for(ll i=0; i<=m; i++){
            ll x=a+i;
            ll y=b+i;
            if(__gcd(x, y)==1)cnt++;
        }
        cout<<cnt<<endl;
    }


    return 0;
}

