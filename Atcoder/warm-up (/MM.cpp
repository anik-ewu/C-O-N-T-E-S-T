
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              1000005


int main(){
    ///Fast;///using Fast I/O
    ll n, ans;
    cin>>n;
    ans=((n*(n-1)))*10-((n*(n-1)));
    cout<<ans<<endl;

    return 0;
}



