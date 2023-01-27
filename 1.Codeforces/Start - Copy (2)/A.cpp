#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

ll arr[52];

int main(){

    double a, b, t=1, n , m;
    cin>>t;
    while(t--){
         cin>>n;
         for(int i = 1; i<=n; i++) {
            cin>>arr[i];
         }

        for(int i = 2; i<=n; i++) {
            arr[1] = arr[1] * arr[i];
            arr[i] = 1;
        }

        long long sum = 0;
        for(int i = 1; i<=n; i++) {
            sum += arr[i];
        }

        cout<<(sum*1LL*2022)<<endl;

    }

    return 0;
}
