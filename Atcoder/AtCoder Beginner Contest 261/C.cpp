#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

map<string, int > mp;

int main(){

    string s;
    int a, b, t=1, n , m;
    cin>>n;

    for(int i=1; i<=n; i++) {
        cin>>s;
        if(mp.find(s) == mp.end()) {
            cout<<s<<endl;
        } else {
            cout<<s<<'('<<mp[s]<<')'<<endl;
        }
        mp[s]++;
    }

    return 0;
}
