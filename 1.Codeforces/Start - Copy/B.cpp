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
        for(int i=1; i<=n; i++){
          cin>>arr[i];
        }

        bool flag=(n%2==0);

        if(!flag){
            for(int i=1; i<n; i++){
                if(arr[i+1]<=arr[i]){
                    flag=true;
                    break;
                }
            }
        }

        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }

    return 0;
}
