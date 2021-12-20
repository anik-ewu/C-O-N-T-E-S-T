#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)    freopen("in.txt","r",stdin);
#define what_is(x) cerr<<#x<<" is "<<x<<"\n";
#define Fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;
ll arr[N];

int main(){

    ll a, b, t, n , m;

    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1; i<=n; i++){
          cin>>arr[i];
        }
        ll mx=0;
        for(int i=2; i<=n; i++){
            ll temp=arr[i]*arr[i-1];
            mx=max(temp, mx);
        }
        cout<<mx<<endl;

    }




    return 0;
}
