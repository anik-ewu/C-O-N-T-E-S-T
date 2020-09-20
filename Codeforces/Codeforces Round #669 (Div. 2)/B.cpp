#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              1005

int arr[sz];

void solve(int n){

    sort(arr+1,arr+n+1);
    reverse(arr+1,arr+n+1);
    cout<<arr[1]<<' ';
    int val=arr[1];
    for(int i=2; i<=n; i++){
        int idx=0;
        int mx=0;
        for(int j=2; j<=n; j++){
            if(arr[j]==0)continue;
            int c=__gcd(val, arr[j]);
            if(c>mx){
                idx=j;
                mx=c;
            }
        }
        cout<<arr[idx]<<' ';
        ///arr[idx]=0;
        val=__gcd(val,arr[idx]);
        arr[idx]=0;
    }
    cout<<endl;
}

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin>>n;
        for(i=1; i<=n; i++){
            cin>>arr[i];
        }
        solve(n);
    }
    return 0;
}

