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

    string s = "Timur";
    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        string p;

        cin>>n>>p;

        bool ok = (n==5);
        int cnt = 0;

        for(int i=0; i<s.size(); i++) {
            for(int j=0; j<p.size(); j++){
                if(s[i]==p[j]) {
                    cnt++;
                    break;
                }
            }
        }

        if(cnt != s.size()) {
            ok = false;
        }

        if(ok){
            cout<<"Yes"<<endl;
        } else {
            cout<<"No"<<endl;
        }


    }

    return 0;
}
