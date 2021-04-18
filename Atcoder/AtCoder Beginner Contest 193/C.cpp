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

    ll a,b, n,m, i,j;

    cin>>n;
    ll res=0;
    set< ll > st;
    for(i=2; i*i<=n;  i++){
        j=i*1LL*i;
        while(j<=n){
            st.insert(j);
            j=j*1LL*i;
        }
    }
    cout<<n-st.size()<<endl;

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

