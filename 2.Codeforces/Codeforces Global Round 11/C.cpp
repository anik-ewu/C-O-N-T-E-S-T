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

priority_queue< pair < int , pair< int, int > > > pq;

int brr[sz];

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin>>k>>n;
        for(i=1; i<=n; i++){
            cin>>a>>b>>c;
            pq.push({-a,{b,c}});
        }

        int x=1, y=1;

        int cnt=0, T=0, ans=0;
        j=1;
        int kk=1;
        memset(brr,0,sizeof(brr));
        while(!pq.empty()){
            int left=pq.top().first*-1;
            int l=pq.top().second.first;
            int r=pq.top().second.second;
            cout<<l<<' '<<r<<endl;
            int need=abs(x-l)+abs(y-r)+T;

            if(need<=left){
                cnt++;
                T=need;
                x=l;y=r;
                brr[j++]=need;
            }
            else if(abs(x-l)+abs(y-r)){
                ans=max(ans,cnt);
                cnt=T=0;
                x=y=1;
            }
            else{
                ans=max(ans,cnt);

                while(need>left){
                    need-=brr[kk++];
                    cnt--;
                }

            }
            pq.pop();

        }
        cout<<ans<<endl;

    }
    return 0;
}

