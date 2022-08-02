#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int arr[N];

int main(){

    long long a, b, t=1, n , m, k;
    cin>>t;
    while(t--){

        cin>>n>>m>>k;

        vector<int>v;
        long long total = 0;

        for(int i=1; i<=k; i++) {
            cin>>a;
            if(a>=3) {
                v.push_back(a);
                total += a;
            }
        }


        bool ok = true;
        long long need = n*m;

        if(total < need ) {
            ok = false;
        }

        if(ok) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
