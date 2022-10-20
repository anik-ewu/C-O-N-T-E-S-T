#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int main(){

    int a, b, t=1, n , m, k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int arr[n+2];

        bool oneExist = false;
        for(int i=1; i<=n; i++) {
            cin>>arr[i];
            if(arr[i])
                oneExist = true;
        }

        if(oneExist) {
            cout<<"YES"<<endl;
        } else {
            cout<<"No"<<endl;
        }





    }

    return 0;
}
