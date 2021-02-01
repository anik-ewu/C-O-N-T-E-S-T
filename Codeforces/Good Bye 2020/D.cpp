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

int arr[sz];
vector< int > adj[sz];
priority_queue< int > pq;


int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin>>n;

        ll sum=0;
        for(i=1; i<=n; i++)adj[i].clear();
        for(i=1; i<=n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        for(i=1; i<n; i++){
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        for(i=1; i<=n; i++){
            if(adj[i].size()>1){
                int k=adj[i].size();
                while(k>1){
                    pq.push(arr[i]);
                    k--;
                }
            }
        }

        cout<<sum;
        k=n-2;
        while(k--){
            sum+=pq.top();
            pq.pop();
            cout<<' '<<sum;
        }
        cout<<endl;
    }

    return 0;
}

