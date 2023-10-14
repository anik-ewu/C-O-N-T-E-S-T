#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

bool matchString(string& x, string& s) {
    int n = x.size();
    int m = s.size();
    for (int i = 0; i <= (n - m); i++) {
        bool flag = true;
        for (int j = 0; j < m; j++) {
            if (x[i + j] != s[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            return true;
        }
    }
    return false;
}

int main(){

    double a, b, t=1, n , m;
    cin>>t;
    while(t--){

        string s,x;
        cin>>n>>m;
        cin>>x>>s;
        int i = 0;
        int minMoves = -1;
        
        while(x.size() < 76) {
            if (matchString(x, s)) {
                minMoves = i;
                break;
            }
            x = x + x;
            i++;
        }

        cout<<minMoves<<endl;

    }

    return 0;
}
