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

int main(){

    Fast;

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){
        cin>>n;
        int mx = 0;
        int mxIdx = 0;
        for(int i=1; i<=n; i++) {
            cin>>arr[i];
            if(arr[i] > mx) {
                mx = arr[i];
                mxIdx = i;
            }
        }

        int mx2 = 0;
        for(int i=1; i<=n; i++) {
            if(i==mxIdx)
                continue;
            mx2=max(mx2, arr[i]);
        }

        for(int i=1; i<=n; i++) {
            if(i == mxIdx) {
                cout<<arr[i]-mx2;
            } else {
                cout<<arr[i]-mx;
            }
            cout<<' ';
        }
        cout<<endl;



    }

    return 0;
}
