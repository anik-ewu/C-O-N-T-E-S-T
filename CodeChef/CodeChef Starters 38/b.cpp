#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
using namespace std;
using namespace __gnu_pbds;
///use less_equal instead of less for multi set
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> new_data_set;

#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";

typedef long long  ll;
const ll MAX = 3e5+5;
const ll MOD = 1e9+7;
const ll INF = 1e18;

char f;
string s;
bool flag;
vector< int > v;

int arr[MAX];
int brr[MAX];

map<pair<int , int >, int > mp;

int main() {

   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

   int n,m,k, t = 1, caseCounter = 1;
   cin>>t;
   while(t--) {

        cin>>n;
        for(int i = 1; i<=n; i++)cin>>arr[i];
        for(int i = 1; i<=n; i++)cin>>brr[i];

        mp.clear();
        for(int i = 1; i<=n; i++) {
            mp[{arr[i], brr[i]}]++;
        }

        ll res = 0;
        for(int i = 1; i<=n; i++){
            mp[{arr[i], brr[i]}]--;
            res += mp[{brr[i], arr[i]}];
        }
        cout<<res<<endl;
   }
    return 0;
}

