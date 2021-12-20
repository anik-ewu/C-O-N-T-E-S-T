#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)    freopen("in.txt","r",stdin);
#define what_is(x) cerr<<#x<<" is "<<x<<"\n";
#define Fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

vector< int > arr;

void pre(){

    queue< pair< int , int > > q;
    for(int i=1; i<=9; i++){
        q.push({i, i});
    }
    while(!q.empty()){
        ll u=q.front().first;
        ll v=q.front().second;
        q.pop();
        arr.push_back(u);
        u=(u*1LL*10)+v;
        if(u<=inf)
        q.push({u,v});
    }
    sort(arr.begin(), arr.end());
}

int main(){

    int a, b, t, n , m;

    pre();
    cin>>t;
    while(t--){
        cin>>n;
        int idx=upper_bound(arr.begin(), arr.end(), n)-arr.begin();
        cout<<idx<<endl;
    }



    return 0;
}
