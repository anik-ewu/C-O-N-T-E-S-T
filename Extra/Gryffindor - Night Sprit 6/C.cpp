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

    int a, b, t=1, n , m, x, y;
    cin>>t;
    while(t--){

        cin>>n>>m>>x>>y>>a>>b;

        int right = m-b;
        int down  = n-a-right;
        int time_for_police = right + max(0, down);

        right = m - y;
        down  = n - x;
        int time_for_thief = right + down;


        if(time_for_thief <= time_for_police) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}
