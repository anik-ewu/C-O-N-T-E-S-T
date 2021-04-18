/*
Date: 16-4-2021
Algo: BFS
IDEA: Find the distance of each node from the 0th node.
*/
#include<bits/stdc++.h>
using namespace std;

const int N= 1000001;
int vis[N];
int arr[N];
vector< int > adj[N];

void BFS(int src){

    queue< int > q;
    priority_queue< int > val;
    priority_queue< int > index;

    q.push(src);
    vis[src]=1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        index.push(-u);
        val.push(arr[u]);
        for(int v: adj[u]){
            if(vis[v]==0){
                vis[v]=1;
                q.push(v);
            }
        }
    }
    while(!index.empty()){
        int idx=index.top()*-1;
        int num=val.top();
        index.pop();
        val.pop();
        arr[idx]=val;
    }
}

int main(){

    int t, n, m, a, b;

    cin>>n>>m;
    for(int i=1; i<=n; i++)adj[i].clear();
    for(int i=1; i <=m; i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    BFS();
    for(int i=1; i<=n; i++)if(vis[i]==0)BFS(i);
    for(int i=1; i<=n; i++)cout<<arr[i]<<' ';
    return 0;

}

