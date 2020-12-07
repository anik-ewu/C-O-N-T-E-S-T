#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1e9+7
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              3005

int arr[sz];

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin>>n>>k;
        for(i=1; i<=n; i++){
            cin>>arr[i];
        }
        sort(arr+1,arr+n+1);
        a=arr[1];
        ll cnt=0;
        for(i=2; i<=n; i++){
           b=k-arr[i];
           if(b>=1){
               cnt+=(b/a);
           }
        }
        cout<<cnt<<endl;
    }





    return 0;
}

