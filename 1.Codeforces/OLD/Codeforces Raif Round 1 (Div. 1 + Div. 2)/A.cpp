#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1e9+7
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              3000005

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m,x,y;

    cin>>t;
    while(t--){
        cin>>a>>b>>x>>y;
        k=abs(a-x)+abs(b-y);
        if(a!=x && b!=y)k+=2;
        cout<<k<<endl;
    }





    return 0;
}
