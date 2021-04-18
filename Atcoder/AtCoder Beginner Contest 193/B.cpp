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

    int a,b,c, n,m, i,j;

    int res=INT_MAX;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a>>b>>c;
        if(a<c){
            res=min(res, b);
        }

    }
    if(res==INT_MAX)
        res=-1;
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

