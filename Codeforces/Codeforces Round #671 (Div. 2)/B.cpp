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

int main(){
    Fast;///using Fast I/O
    ll a,b,c, i,j,k, t,n,m;
    cin>>t;
    while(t--){
        cin>>n;
        i=1;
        j=0;
        int cnt=0;
        while(true){
          ll need=(i*i)+(j*2);
          if(need>n){
            break;
          }
          else{
            cnt++;
            n-=need;
            i=i*2;
            j=need;
          }
        }
        cout<<cnt<<endl;
    }

    return 0;
}

