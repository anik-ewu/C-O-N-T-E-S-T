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


int point[101];

void precal(){
    int p=0;
    for(int i=2; i<=100; i+=2){
        point[i]=++p;
        point[i+1]=(++(++p));
    }
}


void solve(){

    precal();
    int a,b, n,m, i,j,k;
    cin>>n;
    for(i=1; i<=n; i++){
        int rem=point[n];
        for(j=i+1; j<=n; j++){
            if(rem>=3){
                cout<<1<<' ';
                rem-=3;
            }
            else if(rem){
                cout<<0<<' ';
                rem--;
            }
            else{
                cout<<-1<<' ';
            }
        }
    }
    cout<<endl;
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

