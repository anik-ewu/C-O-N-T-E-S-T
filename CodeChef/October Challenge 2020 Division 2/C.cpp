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

map< int , int > mp;

void pre(){
    for(int i=0; i<20; i++){
        mp[1<<i]=1;
    }
}

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;
    pre();
    cin>>t;
    while(t--){
        cin>>n;
        if(mp[n]){
            cout<<-1<<endl;
        }
        else{
            i=n-(n%2);
            while(i>0){
                cout<<i<<' ';
                i-=2;
            }
            i=3;
            while(i<=n){
                cout<<i<<' ';
                i+=2;
            }
            cout<<1<<endl;
        }
    }
    return 0;
}

