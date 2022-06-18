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

    int a, b, t=1, n , m, k;
    cin>>t;
    while(t--){

        ll res = 0;
        vector< int > remainingValues;

        cin>>n>>k;

        for(int i=1; i<=n; i++){
            cin>>a;
            res += (a/k);
            if(a%k)
                remainingValues.push_back(a%k);
        }

        sort(remainingValues.begin(), remainingValues.end());

        int pos = remainingValues.size()-1;
        for(int i=0; i<pos; i++){
            if(remainingValues[i]+remainingValues[pos]>=k){
                res++;
                pos--;
            }
        }

        cout<<res<<endl;

    }

    return 0;
}
