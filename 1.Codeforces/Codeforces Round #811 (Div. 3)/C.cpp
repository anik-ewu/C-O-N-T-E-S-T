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

        vector<int>v;
        cin>>n;

        int i = 9;
        while(n) {

            if(i<=n) {
                v.push_back(i);
                n-=i;
            }
            i--;
        }
        sort(v.begin(),v.end());
        for(int i=0; i<v.size(); i++)
            cout<<v[i];
        cout<<endl;
    }

    return 0;
}
