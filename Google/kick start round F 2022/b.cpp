#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 65539;

int lavel[N];
int numberOfContainers[N];
vector < int > tree[N];

void containersInEachLavel() {

    queue< int > q;
    memset(lavel, 0, sizeof(lavel));

    q.push(1);
    lavel[1] = 1;
    memset(numberOfContainers, 0, sizeof(numberOfContainers));
    numberOfContainers[1] = 1;


    while(!q.empty()) {
        int u = q.front();
        q.pop();

        for(int i=0; i<tree[u].size(); i++) {
            int v = tree[u][i];
            if(!lavel[v]) {
                q.push(v);
                lavel[v] = lavel[u]+1;
                numberOfContainers[lavel[u]+1]++;
            }
        }
    }
}

int main(){

    int a, b, t=1, n , m, q;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        cin>>n>>q;
        for(int i=1; i<=n; i++)
            tree[i].clear();
        for(int i=1; i<n; i++){
            cin>>a>>b;
            tree[a].push_back(b);
            tree[b].push_back(a);
        }

        for(int i=1; i<=q; i++)
            cin>>a;

        containersInEachLavel();

        int noOfFilledContainer = 0;

        int cumSum = 0;
        for(int i=1; i<=n; i++) {
            cumSum += numberOfContainers[i];
            if(cumSum > q)
                break;

          noOfFilledContainer+=numberOfContainers[i];

        }

         cout<<"Case #"<<tc<<": "<<noOfFilledContainer<<endl;

    }

    return 0;
}

