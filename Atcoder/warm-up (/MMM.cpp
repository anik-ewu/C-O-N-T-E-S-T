#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              1000005

int n;
ll dp[sz][2][2];
int cal(int pos, int zero, int nine){
    if(pos>=n){
        return (zero && nine);
    }
    if(dp[pos][zero][nine]!=-1)return dp[pos][zero][nine]%mod;
    ll ret=0;
    for(int i=0; i<10; i++){
        ret+=(cal(pos+1, zero|i==0, nine|i==9))%mod;
    }
    return dp[pos][zero][nine]=ret%mod;
}


int main(){
    ///Fast;///using Fast I/O
    int a,b,c, i,j,k, t,m;
    cin>>n;
    memset(dp, -1, sizeof(dp));
    cout<<cal(0,0,0)<<endl;


    return 0;
}
