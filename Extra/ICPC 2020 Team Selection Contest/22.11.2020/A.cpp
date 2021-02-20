#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1e9+7
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              3000005


int main(){
    Fast;///using Fast I/O
    int x,y,a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin>>a>>b>>x>>y;
        n=abs(a-x);
        m=abs(b-y);
        cout<<__gcd(n,m)+1<<endl;


    }





    return 0;
}

