#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 2e5+5;
int arr[N];
map< int , int > mp;


int main(){

    Fast;

    int a, b, t=1, n , m, val, k;
    cin>>t;
    while(t--){
        cin>>n>>m;
        mp.clear();
        vector< int > v;
        for(int i = 1; i<=n; i++){
            cin>>arr[i];
            mp[arr[i]]++;
            if(mp[arr[i]]==m)
                v.push_back(arr[i]);
        }
        if(v.size()==0){
            cout<<-1<<endl;
            continue;
        }
        sort(v.begin(), v.end());
        int l = v[0];
        int r = v[0];
        int len = 0;
        for(int i = 0; i<v.size(); i++) {
            int cnt = 0;
            while(i+1<v.size() && v[i]+1 == v[i+1]) {
                cnt++;
                i++;
            }
            if(cnt > len) {
                len = cnt;
                l = v[i-cnt];
                r = v[i];
            }
        }

        cout<<l <<' '<<r<<endl;

    }

    return 0;
}
