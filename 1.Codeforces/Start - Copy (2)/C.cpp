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

        vector< int > v;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());

        if(n==1){
            cout<<v[0]<<endl;
            continue;
        }


        if(v[0]<0){
            for(int i=1; i<n; i++){
                v[i] -=v[0];
            }
            v.erase(v.begin()+0);
        }


        int res=v[0];
        for(int i=0; i<v.size()-1; i++){
            res=max(res, v[i+1]-v[i]);

        }

        cout<<res<<endl;


    }

    return 0;
}
