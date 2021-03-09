#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define mod             1e9+7
#define sz              3000005

void solve(){

    ll a,b,c, n,m, i,j;
    vector< ll > v, va;

    cin>>n;

    for(i=0; i<3; i++){
        cin>>a;
        v.push_back(a);
    }

    for(i=0; i<3; i++){
        if(v[i]<=n){
            if(n%v[i]==0)va.push_back(0);
            else va.push_back(v[i]-(n%v[i]));
        }
        else{
            va.push_back(v[i]-n);
        }       
    }

    sort(va.begin(), va.end());
    cout<<va[0]<<endl;

}

int main(){
    Fast;///using Fast I/O
    
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

