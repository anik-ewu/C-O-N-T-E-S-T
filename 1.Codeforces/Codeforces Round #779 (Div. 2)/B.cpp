#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e3+5;
const int mod = 998244353;

ll fact[N];

void pre() {

    fact[0] = 1;
    for(int i = 1; i<=1003; i++) {
      fact[i] = (i*1LL*fact[i-1])%mod;
    }
}

int main(){

    pre();

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>n;
        if(n%2){
            cout<<0<<endl;
            continue;
        }
        cout<<(fact[n/2]*fact[n/2])%mod<<endl;

    }

    return 0;
}
