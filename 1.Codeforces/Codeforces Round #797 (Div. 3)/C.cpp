#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 2e5+5;

int s[N], f[N];

int main(){

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>n;
        for(int i=1; i<=n; i++)cin>>s[i];
        for(int i=1; i<=n; i++)cin>>f[i];

        vector< int > v;

        for(int i=1; i<=n; i++){
            if(i>1)
                v.push_back(f[i]-max(f[i-1], s[i]));
            else
                v.push_back(f[i]-s[i]);
        }

        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<' ';
        cout<<endl;

    }

    return 0;
}
