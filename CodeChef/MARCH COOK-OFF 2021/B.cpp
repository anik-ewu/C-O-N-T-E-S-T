#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll                inf = 1e9;

#define all(x)          (x).begin(), (x).end()
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int               mod=1e9+7;
const int               sz =1e5+5;

int arr[100][100];

void solve(){

    ll a,b, n,m,k, i,j;
    ll tot;
    cin>>n>>m>>k;
    tot=n*m;
    if(m>n)swap(m, n);

    i=1;
    ll sum=0,res=0, num=k+2; 
    while(i<m){
        if(i%2)res=res^num;
        num++;
        sum+=(i*2);
        i++;
    }
    i=(tot-sum)/m;
    while(i--){
        if(m%2)res=res^num;
        num++;
    }

    i=m-1;
    while(i){
        if(i%2)res=res^num;
        num++;
        i--;
    }

    cout<<res<<endl;
}

int main(){
    
    Fast;   
    read(x); write(x);

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

