#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              3000005
vector< char > vc;
int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>n>>m;
    if(m==1){
        while(n-->1){
            cout<<'U';
        }
        cout<<endl;
        return 0;
    }
    for(i=1; i<=n; i++){
        k=m;
        vc.push_back('U');
        while(k--){
            if(i%2)vc.push_back('R');
            else vc.push_back('L');
        }
    }
    for(i=0; i<vc.size()-1; i++){
        cout<<vc[i];
    }
    cout<<endl;

    return 0;
}

