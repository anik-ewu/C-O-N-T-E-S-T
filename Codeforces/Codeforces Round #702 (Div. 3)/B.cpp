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


void solve(){

    int a,b, n,m, i,j;
    int x=0,y=0,z=0;
    cin>>n;
    for(i=1; i<=n; i++){
        cin>>a;
        if(a%3==0)x++;
        if(a%3==1)y++;
        if(a%3==2)z++;
    }
    int res=0;
    int len=n/3;
    while(x!=y || y!=z || z!=x){

        if(x>len){
            y+=(x-len);
            res+=(x-len);
            x-=(x-len);
        }
        if(y>len){
            z+=(y-len);
            res+=(y-len);
            y-=(y-len);
        }

        if(z>len){
            x+=(z-len);
            res+=(z-len);
            z-=(z-len);
        }
    }


    cout<<res<<endl;





}

int main(){
    Fast;///using Fast I/O
    int multitest=1;
    if(multitest){
        int tc;
        cin>>tc;
        while(tc--)
            solve();
    }
    else
        solve();

    return 0;
}

