#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

string pi = "314159265358979323846264338327";

int main(){

    string s;
    double a, b, t=1, n , m;
    cin>>t;
    while(t--){
        cin>>s;
        int cnt = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == pi[i]) {
                cnt++;
            }
            else {
                break;
            }
        }
        cout<<cnt<<endl;

    }

    return 0;
}
