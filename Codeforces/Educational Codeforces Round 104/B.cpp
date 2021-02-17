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

    int a,b,c, n,m,k, i,j;
    cin>>n>>k;

    int posA, posB;

    posA=n-(k%n)-1;

    if(k<n){
        posB=((k)+(k*2<=n))%n;
    }
    else{
        m=k%n;
        c=((k/n)*2)%n;
        c=(c+m)%n;
        posB=c;
        if(posB>=posA)posB++;
    }
    posB=posB%n;
    posB=max(posB, 1);
    cout<<posB<<endl;

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

