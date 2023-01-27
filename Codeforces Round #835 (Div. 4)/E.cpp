#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 2e5+5;

int arr[N];
int cumZeros[N];
int cumOnes[N];

int main(){

    Fast;

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){
        cin>>n;
        memset(cumOnes, 0, sizeof(cumOnes));
        memset(cumZeros, 0, sizeof(cumZeros));

        for(int i=1; i<=n; i++) {
            cin>>arr[i];
            cumOnes[i] = cumOnes[i-1]+arr[i];
        }

        int zeros = 0;
        for(int i=n; i>=1; i--) {
            zeros += (arr[i] == 0);
            cumZeros[i] = zeros;
        }

        ll counInv = 0;

        for(int i=1; i<=n; i++) {
            if(arr[i] == 1) {
                counInv += cumZeros[i];
            }
        }

        int mxProfit = 0;
        for(int i=1; i<=n; i++) {
            if(arr[i]) {
                int add = cumOnes[i-1];
                int sub = cumZeros[i+1];
                mxProfit = max(mxProfit, add-sub);
            } else {
                int add = cumZeros[i+1];
                int sub = cumOnes[i-1];
                mxProfit = max(mxProfit, add-sub);
            }

        }

        cout<<counInv+mxProfit<<endl;

    }

    return 0;
}
