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
    ll a,b,c,d, i,j,k, t,n,m;

    cin>>a>>b;
    cin>>c>>d;
    i=max(a,c);
    j=min(b,d);

    if(i<=j){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }







    return 0;
}
