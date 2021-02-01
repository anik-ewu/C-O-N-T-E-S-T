#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1e9+7
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              3000005

priority_queue< pair< ll , pair< ll, ll > > > pq;

int cal(ll a, ll b){

    if(a>=b || a==1){
        return(b%2);
    }
    ll m=1;
    while(m*a<=b){
        m=m*a;
    }
    b-=m;
    return (1+(b%2));

}

int main(){
    ll a,b,c, l,r,i,j,k, t,n,m;
    freopen("powers.in","r",stdin);
    scanf("%lld", &t);
    while(t--){
       scanf("%lld", &n);
       ll  ans=0;
       for(i=1; i<=n; i++){
            scanf("%lld%lld", &a, &b);
            ll curr=cal(a, b);
            if(i==1){
                ans=curr;
                continue;
            }
            if(ans==curr){
                if(ans==1)ans=2;
                else ans=1;
            }
       }
       printf("%d\n",ans);

    }

    return 0;
}

