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

    vector < ll > v;
    ll a,b,c, i,j,k, t,n,m, x, y;
    cin>>x>>y>>a>>b;

    i=x;
    v.push_back(x);
    while((double)i*a<y){
        v.push_back(i*a);
        i=i*a;
    }

    ll ans=0, exp;
    for(i=0; i<v.size(); i++){
        exp=i+(y-v[i]-1)/b;
        ans=max(ans, exp);
    }

    cout<<ans<<endl;

    return 0;
}

