#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)    freopen("in.txt","r",stdin);
#define what_is(x) cerr<<#x<<" is "<<x<<"\n";
#define Fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 2e5+5;

ll arr[N];

int main(){

    ll a, b, t, n , m, k;

    cin>>n>>m>>k;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }

    sort(arr+1, arr+n+1);
    priority_queue< ll > pq;

    int ans=1;
    for(int i=2; i<=n; i++){
        if(arr[i]-arr[i-1]>k)
            pq.push(-(arr[i]-arr[i-1])), ans++;
    }

    vector < ll > v;

    while(!pq.empty() and m){
        ll diff=pq.top()*-1;
        ll need=diff/k;
        if(diff%k==0)need--;
        v.push_back(need);
        pq.pop();
    }

    if(v.size()){
        sort(v.begin(), v.end());
        for(int i=0; i<v.size(); i++){
            if(v[i]<=m){
                m-=v[i];
                ans--;
            }
            else
                break;
        }
    }


    cout<<ans<<endl;





    return 0;
}
