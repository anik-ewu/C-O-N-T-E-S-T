#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define mod             1e9+7
#define sz              100005

int len;
int fre[sz];
int dp[sz][2];

void f(int i, int big){
    if(i==len){

    }
    if(dp[i][big]!=inf)return dp[i][big];

    char l='a';
    if(!big){
        l=(s[i]
    }

    int a;
    for(int j=l; j<='z'; j++){
        if(j==s[i])a=f(i+1, big);
        else{
            a=(len-i)
        }
    }

}

void solve(){

    int a,b, n,m, i,j;
    cin>>n>>k;
    cin>>s;
    memset(fre, 0 , sizeof(arr));
    for(i=0; i<n; i++){
        dp[i]=inf;
        fre[s[i]]++;
    }
    len=n;
    int res=f(0,0);
    cout<<res<<endl;

}

int main(){
    Fast;///using Fast I/O
    
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

