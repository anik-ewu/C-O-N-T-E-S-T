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

ll po[sz];
ll arr[sz];

build(int n){

    po[0]=1;
    for(int i=1; i<n; i++){
        po[i]=(po[i-1]*2);
    }

}

ll solve(int n){

    ll tot=0;
    for(ll k=32; k>=0; k--){
        ll cnt=0;
        for(int i=1; i<=n; i++){
            if(arr[i]<=po[k] && (arr[i]&(1<<(k-1)))){
                cnt++;
            }
        }
        if(cnt){
            tot+=((cnt*(cnt-1))/2);
        }
    }
    return tot;
}

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    build(32);

    cin>>t;
    while(t--){
        cin>>n;
        for(i=1; i<=n; i++){
            cin>>arr[i];
        }

        cout<<solve(n)<<endl;
    }

    return 0;
}

