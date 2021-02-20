///#Dijkstra : Priority_Queue

#include<bits/stdc++.h>
using namespace std;

#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);



#define sz 100005
typedef long long int ll;
const ll inf=1e18;

ll dis[sz],cost[sz];
vector <ll >adj[sz],weight[sz], T[sz];

ll diajkstra(int src){

    priority_queue<pair<ll,ll> > pq;
    pq.push(make_pair(0,src));
    cost[src]=dis[src]=0;

    while(!pq.empty()){
        ll u=pq.top().second;
        pq.pop();
        for(int i=0; i<adj[u].size(); i++){
            int v=adj[u][i];
            int extra=0;
            if(cost[u]){
            	if(cost[u]<=T[u][i]){
            		extra=T[u][i]-cost[u];
            	}
            	else if(cost[u]%T[u][i]){
            		extra=T[u][i]-(cost[u]%T[u][i]);	
            	}
            }


            if(cost[v]>cost[u]+extra+weight[u][i]){
                dis[v]=dis[u]+1;
                cost[v]=weight[u][i]+extra+cost[u];///relaxation
                pq.push(make_pair(dis[v]*-1,v));///to cover the nearest node first
            }
        }
    }
}

void init(int vertex){

   for(int i=0; i<=vertex; i++)
    cost[i]=inf,dis[i]=0,adj[i].clear(),weight[i].clear();
}

int main(){

	read(x); write(x);

    int i,a,b,c,d,n,m,p,q;

    scanf("%d%d",&n,&m);
    scanf("%d",&p);
    scanf("%d",&q);
    init(n);///reset
    for(i=1; i<=m; i++){
        scanf("%d%d%d%d",&a,&b,&c,&d);

        adj[b].push_back(a);
        adj[a].push_back(b);
        weight[a].push_back(c);
        weight[b].push_back(c);
        T[a].push_back(d);
        T[b].push_back(d);
    }

    diajkstra(p);///source value

    if(cost[q]!=inf)printf("%lld",cost[q]);
    else printf("-1\n");


    return 0;
}

