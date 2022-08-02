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
int mark[N];

int main(){

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        memset(mark, 0, sizeof(mark));

        cin>>n;
        for(int i=1; i<=n; i++) {
            cin>>arr[i];
        }

        int i = n;

        while(i>=1 and mark[arr[i]]==0)
            ++mark[arr[i--]];

        cout<<i<<endl;
    }

    return 0;
}
