#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              200005
int arr[sz];
int brr[sz];
int crr[sz];

int cal(int n){

    ll ans=0, x=abs();
    for(int 2=1; i<=n; i++){
        if(arr[i]==brr[i]){
         ans=max(ans,x+1);
         x=1;
         continue;
        }
        x+=crr[i];
    }
    ans=max(ans, x);
    return ans;
}


int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m,x,y;

    cin>>t;
    while(t--){
        cin>>n;
        for(i=1; i<=n; i++)cin>>crr[i];
        for(i=1; i<=n; i++)cin>>arr[i];
        for(i=1; i<=n; i++)cin>>brr[i];

        cout<<cal(n)<<endl;
    }

    return 0;
}

