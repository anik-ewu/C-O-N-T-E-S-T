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

    ll a,b, n,m, i,j, k,l;

    ll cnt=0;
    cin>>n;

    for(i=1; i<=n; i++){
        for(j=1; (i*j)<=n; j++){
            for(k=1; k*i*j<=n; k++){
                cnt++;
            }
        }
    }


    cout<<cnt<<endl;


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

//16782730