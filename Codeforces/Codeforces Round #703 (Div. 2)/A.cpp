#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1e9+7
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              305

ll arr[sz];

void solve(){

    ll a,b, n,m, i,j;
    cin>>n;
    bool ok=true;
    for(i=1; i<=n; i++){
        cin>>arr[i];
    }
    ll need=0;
    for(i=1; i<=n; i++){
        if(arr[i]<need){
            ok=false;
        }
        arr[i+1]+=(arr[i]-need);
        need++;
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
    //read(x);
    //write(x);


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

