#include<bits/stdc++.h>
using namespace std;
typedef long            long ll;
#define all(x)          (x).begin(), (x).end()
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const ll                inf = 1e9;
const int               mod=1e9+7;
const int               sz =1e7+5;

ll cost[sz];
bool vis[sz];

ll bfs(ll d, int x, int y){

	
	queue< ll > q;
	memset(vis, 0, sizeof(vis));
	memset(cost, 0, sizeof(cost));
	
	q.push(1);
	vis[1]=1; cost[1]=y;
	
	while(!q.empty()){

		int u=q.front();
		q.pop();
		if(u==d){
			return cost[u];
		}

		ll dx=u*1LL*2;
		ll dy=u^1;

		if(dx<=d and vis[dx]==0){
			cost[dx]=cost[u]+x;
			vis[dx]=1;
			q.push(dx);
		}

		if(dy<=d and dy and vis[dy]==0){
			cost[dy]=cost[u]+y;
			vis[dy]=1;
			q.push(dy);
		}
	}
}


int main(){
    
    Fast;   
    read(x); write(x);

    ll t, d, x, y;
    cin>>t;
    while(t--){
    	cin>>d>>x>>y;

    	ll res=bfs(d, x, y);

    	cout<<res<<endl;
    }
    
    return 0;
}

