#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int main(){

    Fast;
    int a, b, t=1, n , m, x, y;
    cin>>t;
    while(t--){

        cin>>n>>m>>x>>y;

        string s;

        for(int i = 1; i<=n; i++) {
            int fully = 0;
            int partially = 0;
            cin>>s;

            for(int j=0; j<m; j++){
                fully += s[j]=='F';
                partially += s[j]=='P';
            }
            if(fully>=x || (fully+1==x and partially>=y))
                cout<<'1';
            else
                cout<<'0';
        }
        cout<<endl;

    }

    return 0;
}


