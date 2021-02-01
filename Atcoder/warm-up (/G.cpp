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

int arr[25];

int main(){
    Fast;///using Fast I/O
    ll ia,b,c, i,j,k, t,n,m;

    cin>>n;
    i=1;
    int sum=0;
    while(n){
        arr[i++]=n%10;
        sum+=n%10;
        n/=10;
    }
    m=--i;

    int ans=inf;
    for(int mask=0; mask<(1<<m); mask++){
        int x=0;
        int cnt=0;
        for(i=0; i<m; i++){
            if(mask&(1<<i)){
               x+=arr[i+1];
               cnt++;
            }
        }
        if(cnt<m &&(sum-x)%3==0){
            ans=min(ans, cnt);
        }
    }
    if(ans==inf)ans=-1;
    cout<<ans<<endl;



    return 0;
}

