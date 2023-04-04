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

    string s;
    int a, b, t=1, n , m;
    cin>>t;
    while(t--){
        cin>>n>>s;
        int x = 0;
        int y = 0;
        bool ok = false;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'L') x--;
            if (s[i] == 'R') x++;
            if (s[i] == 'U') y++;
            if (s[i] == 'D') y--;
            if (x == 1 && y == 1) {
                ok = true;
            }
        }
        if(ok) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }   



    }

    return 0;
}
