#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)    freopen("in.txt","r",stdin);
#define what_is(x) cerr<<#x<<" is "<<x<<"\n";
#define Fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

map< string  , int > mp;
map< string  , int > last_apr;

int main(){

    string s;
    vector< string > vs;
    int a, b, t, n ,k,  m;
    cin>>n>>k;
    getchar();
    for(int i=1; i<=n*3; i++){
        getline(cin, s);
        if(mp.find(s)==mp.end())
            vs.push_back(s);
        mp[s]++;
        last_apr[s]=i;
    }
    priority_queue< pair< int, pair< int , string > > >pq;
    for(int i=0; i<vs.size(); i++){
        pq.push({mp[vs[i]],{last_apr[vs[i]], vs[i]}});
    }
    while(!pq.empty() and k--){
        cout<<pq.top().second.second<<endl;
        pq.pop();
    }

    return 0;
}
