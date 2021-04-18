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
    int a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin>>n>>k;

        bool good=true;
        bool pre=false;
        int tot=0;

        for(i=1; i<=n; i++){
            cin>>a;
            if(a!=k)good=false;
            if(a==k)pre=true;
            tot=tot+(k-a);
        }
        if(good)cout<<0<<endl;
        else if(tot==0 || pre)cout<<1<<endl;
        else cout<<2<<endl;

    }
    return 0;
}

