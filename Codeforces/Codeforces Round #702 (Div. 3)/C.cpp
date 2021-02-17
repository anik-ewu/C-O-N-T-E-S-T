#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1e9+7
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              3000005

const ll K=1e12;
map< ll, int > mp;

void pre(){
    for(ll i=1; i*i*i<=K; i++){
        mp[i*i*i]=1;
    }
}

void solve(){
    pre();
    ll a,b, n,m, i,j;
    cin>>n;

    bool ok=false;
    for(i=1; n-(i*i*i)>=1; i++){
        if(mp[n-(i*i*i)]){
            ok=true;
            break;
        }
    }
    if(ok){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}

int main(){
    Fast;///using Fast I/O
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

