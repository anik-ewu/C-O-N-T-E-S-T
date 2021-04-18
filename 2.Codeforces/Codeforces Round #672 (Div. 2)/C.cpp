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

ll arr[sz];

ll solve(int n){

    ll sum=0;
    int i=0;
    vector< ll > v;
    while(i<=n){

        while(i<n && arr[i]<arr[i+1])i++;
        v.push_back(arr[i]);
        i++;

        while(i<n && arr[i]>arr[i+1])i++;
        v.push_back(arr[i]);
        i++;
    }
    for(int i=0; i<v.size()-1; i++){
        if(i%2==0)sum+=v[i];
        else sum-=v[i];
    }
    return sum;

}


int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m,q;

    cin>>t;
    while(t--){
        cin>>n>>q;
        for(i=1; i<=n; i++){
            cin>>arr[i];
        }
        ll tot=solve(n);
        cout<<tot<<endl;
        while(q--){
            cin>>a>>b;
            tot+=(arr[i]-arr[b]);
            cout<<tot<<endl;
        }
    }
    return 0;
}

