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

    int r, s, a, b, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>n>>s>>r;
        vector<int>res;
        res.push_back(s-r);
        n--;

        if(n) {
            int div = r/n;
            int rem = r%n;
            if(div) {
                for (int i = 0; i < n; i++) {
                    res.push_back(div);
                }
                for(int i = 1; i < n; i++) {
                    if(!rem) {
                        break;
                    }
                    rem--;
                    res[i]++;
                }
            }
            else {
                res.push_back(rem);
            }
        }

        for (int i = 0; i < res.size(); i++) {
            cout<<res[i]<<' ';
        }
        cout<<endl;




    }

    return 0;
}
