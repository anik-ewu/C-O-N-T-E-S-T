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

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>n>>m;
        string s;

        cin>>s;

        int x=1;
        int y=1;
        int minX=INT_MAX;
        int minY=INT_MAX;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='L')x++;
            if(s[i]=='R')x--;
            if(s[i]=='U')y++;
            if(s[i]=='D')y--;

        }
        x=min(x, m);
        y=min(y, n);

        y=max(y, 1);
        x=max(x, 1);
        cout<<x<<' '<<y<<endl;


    }

    return 0;
}
