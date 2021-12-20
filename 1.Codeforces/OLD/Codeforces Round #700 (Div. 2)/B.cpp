#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1e9+7
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              100005

int arr[sz];
int brr[sz];

void solve(){

    ll A, B, a,b, n,m, i,j,x,y;
    priority_queue < pair< int , int > > pq;
    cin>>A>>B>>n;
    for(i=1; i<=n; i++)cin>>arr[i];
    for(i=1; i<=n; i++)cin>>brr[i];

    for(i=1; i<=n; i++){
        pq.push({-arr[i], brr[i]});
    }

    while(!pq.empty() && B>0){
        ll attack=pq.top().first*-1;
        ll health=pq.top().second;
        ll fight=(health/A)+(health%A!=0);

        if(B<(fight*1LL*attack)){
            ll pos=(B/attack)+(B%attack!=0);
            ll sub=pos*A;
            if(sub>=health)pq.pop();
            break;
        }

        B-=(fight*1LL*attack);
        pq.pop();

    }

    if(pq.size()){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }



}

int main(){
    Fast;///using Fast I/O
    int multitest=1;
    if(multitest){
        int tc;
        cin>>tc;
        while(tc--)
            solve();
    }
    else
        solve();

    return 0;
}

