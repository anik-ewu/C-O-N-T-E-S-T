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

    string s;
    int a, b, t=1, n , m, k;
    cin>>t;
    while(t--){

        cin>>k>>n;
        vector<int> v;
        for(int i=1; i<=k; i++) {
            v.push_back(i);
        }

        v[k-1] = n;
        int del = 1;
        for(int i=k-2; i>=0; i--) {
            if(i>0 && v[i+1] - del > v[i-1]) {
                v[i] = v[i+1]-del;
                del++;
            }
            if(i==0 && v[i+1] - del > 0) {
                v[i] = v[i+1]-del;
            }
        }

        for(int i=0; i<k; i++) {
            cout<<v[i]<<' ';
        }
        cout<<endl;

    }

    return 0;
}
