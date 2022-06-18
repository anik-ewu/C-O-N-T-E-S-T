#include<bits/stdc++.h>
using namespace std;

#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";

typedef long long  ll;
const ll MAX = 3e5+5;
const ll MOD = 1e9+7;
const ll INF = 1e18;

char f;
string s;
bool flag;
vector< int > v;
map< int , int > mp;

int main() {

   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

   int a, b, n,m,k, t = 1, caseCounter = 1;
   cin>>t;
   while(t--) {

        cin>>a>>b>>m;
        if(a>b)swap(a,b);
        int x = b - a;
        int y = m-b+a;

        cout<<min(x,y)<<endl;

   }
    return 0;
}

