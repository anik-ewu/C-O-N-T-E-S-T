#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 105;
ll arr[N];
int main(){

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1; i<=n; i++){
            cin>>arr[i];
        }

        ll GCD = arr[1];
        for(int i=3; i<=n; i+=2){
            GCD = __gcd(GCD, arr[i]);
        }
        bool ok = true;
        for(int i=2; i<=n; i+=2){
            if(arr[i]%GCD==0){
                ok=false;
                break;
            }
        }
        if(ok){
            cout<<GCD<<endl;
            continue;
        }

        GCD = arr[2];
        for(int i=4; i<=n; i+=2){
            GCD = __gcd(GCD, arr[i]);
        }
        ok = true;
        for(int i=1; i<=n; i+=2){
            if(arr[i]%GCD==0){
                ok=false;
                break;
            }
        }
        if(ok){
            cout<<GCD<<endl;
        }
        else{
            cout<<0<<endl;
        }






    }

    return 0;
}
