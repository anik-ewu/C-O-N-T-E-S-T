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

int main(){
    Fast;///using Fast I/O
    ll a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin>>n>>k;
        ll tot=0;
        ll ans=0;
        for(i=1; i<=n; i++){
            cin>>a;
            tot+=a;
            if(tot<k and ans==0){
                ans=i;
            }
            tot-=k;
        }
        if(!ans)
            ans=n+(tot/k)+1;
        cout<<ans<<endl;
    }


    return 0;
}

