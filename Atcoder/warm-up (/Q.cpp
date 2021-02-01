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
    ll sum=0;
    cin>>n;
    cin>>k;
    for(i=2; i<=n; i++){
        cin>>a;
        if(k>a)sum+=(k-a);
        k=max(k, a);
    }
    cout<<sum<<endl;

    return 0;
}

