#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1e9+7
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              300005

ll arr[sz], brr[sz];

int main(){
    Fast;///using Fast I/O
    ll a,b,c, i,j,k, t,n,m,cs=1;


    cin>>t;
    while(t--){
        cin>>m;
        ll lcm;
        for(i=1; i<=m; i++){
            cin >>arr[i]>>brr[i];
            if(i==1){
                lcm=arr[i];
            }
            else{
                ll temp=(lcm*arr[i])/(__gcd(lcm,arr[i]));
                lcm=temp;
            }
        }
        b=0;
        for(i=1; i<=m; i++){
            a=(lcm/arr[i]);
            b=b+(brr[i]*a);
        }
        ll up=b;
        ll lo=lcm;
        ll div=__gcd(up,lo);
        up=up/div;
        lo=lo/div;

        cout<<"Case "<<cs++<<": "<<up<<'/'<<lo<<endl;

    }

    return 0;
}

