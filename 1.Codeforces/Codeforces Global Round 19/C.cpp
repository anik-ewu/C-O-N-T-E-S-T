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

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>n;
        ll res = 0;
        bool ok = false;
        for(int i=1; i<=n; i++){
            cin>>arr[i];
            if(i>1 and i<n and arr[i]!=1)
                ok = true;
        }
        if(!ok) {
            cout<<-1<<endl;
            continue;
        }
        if(n==3){
            if(arr[2]%2){
                res = -1;
            }
            else{
                res = arr[2]/2;
            }
        }
        else{
            for(int i=2; i<n; i++){
                res += arr[i]/2 + arr[i]%2;
            }
        }

        cout<<res<<endl;

    }

    return 0;
}
