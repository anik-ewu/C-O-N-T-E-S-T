#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

map<int,int>mp;
const int N= 1e5+5;

int main(){

    Fast;


    int a, b, t=1, n , m;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>arr;
        mp.clear();
        for(int i = 0; i < n; i++) {
            cin>>a;
            mp[a]++;
            arr.push_back(a);
        }

        sort(arr.begin(), arr.end());
        int cnt = 0;
        for (int i = 0; i < n; i++) {
           if(!mp[arr[i]]) {
            continue;
           }
           int val = arr[i];
           while(mp[val]) {
            mp[val]--;
            val++;
           }
           cnt++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
