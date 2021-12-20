#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int arr[10];

int main(){

    Fast;
    int a, b, t=1, n , m;
    cin>>t;
    while(t--){
        for(int i=1; i<=7; i++){
            cin>>arr[i];
        }
        sort(arr+1, arr+8);
        bool ok = true;
        for(int i=1; i<=7 and ok; i++){
            for(int j=1; j<=7 and ok; j++){
                for(int k=1; k<=7 and ok; k++){
                        if(arr[i]+arr[j]+arr[k]==arr[7] and i!=j and i!=k and j!=k){
                            cout<<arr[i]<<' '<<arr[j]<<' '<<arr[k]<<endl;
                            ok=false;
                            break;
                        }
                    }
                }
            }
        }
    return 0;
}
