#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              3000005

long long int arr[sz];

int main(){
    Fast;///using Fast I/O
    ll a,b,c, i,j,k, t,n,m;

    for(i=1; i<=1000000; i++){
        arr[i]=arr[i-1]+i;
    }

    long long sum=0;

    cin>>n;
    for(i=1; i<=n; i++){
        cin>>a>>b;
        sum+=(arr[b]-arr[a-1]);
    }
    cout<<sum<<endl;


    return 0;
}

