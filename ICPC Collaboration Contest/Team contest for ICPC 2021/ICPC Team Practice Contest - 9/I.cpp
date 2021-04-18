#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll                inf = 1e9;

#define all(x)          (x).begin(), (x).end()
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int               mod=1e9+7;
const int               sz =550;

struct st{
    int s, d, idx;
}arr[sz];

bool cmp(st &a, st &b){
    int x=max(a.s, a.d);
    int y=max(b.s, b.d);
    
    return x>y;
}

void solve(){

    int i, d, s, n, k;
    cin>>n>>k;
    for(i=1; i<=n; i++){
        cin>>arr[i].d;
        cin>>arr[i].s;
        arr[i].idx=i;
    }
    sort(arr+1, arr+n+1, cmp);

    priority_queue< pair< int, pair< int , int > > > pq;

    for(i=1; i<=n; i++){
        int mx=max(arr[i].s, arr[i].d);
        if(mx<=k){
            pq.push({arr[i].s,{arr[d].d, arr[i].idx}});
            k-=arr[i].s;
        }
        else if(pq.size()){
            k+=arr[i].s;
            pq.pop();
            pq.push({arr[i].s,{arr[i].d, arr[i].idx}});
        }
    }
    cout<<pq.size()<<endl;
    while(!pq.empty()){
        cout<<pq.top().second.second<<' ';
        pq.pop();
    }
    cout<<endl;
 
}

int main(){
    
    Fast;   
    read(x); write(x);

    int multitest=0;
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

