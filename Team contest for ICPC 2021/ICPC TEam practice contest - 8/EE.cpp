#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              3000005

string s;
int code, n,cs=1;
ll dp[10005][1023];
const int MOD = 1013;

ll f(int i, int val){
    if(i==n){
        return val==code;
    }
    if(dp[i][val]!=-1)return dp[i][val];

    ll a=0;
    if(s[i]!='?'){
        int c=(val * 31 + s[i]) % MOD;
        a=f(i+1,c);
    }
    else{
        for(int j='a'; j<='z'; j++){
            int c=(val * 31 +j) % MOD;
            a+=f(i+1,c);
        }
    }
    return dp[i][val]=a;
}

void path(int i, int val){
    if(i==n){
        cout<<endl;
        return ;
    }
    if(s[i]!='?'){
        cout<<s[i];
        val=(val * 31 + s[i]) % MOD;
        path(i+1, val);
        return;
    }
    else{
        for(int j='a'; j<='z'; j++){
            int c=(val * 31 +j) % MOD;
            if(f(i+1,c)){
                cout<<char(j);
                path(i+1,c);
                break;
            }
        }
    }
}

void solve(){

    cin>>code>>s;
    n=s.size();
    memset(dp, -1, sizeof(dp));

    ll res=f(0,0);
    cout<<"Case #"<<cs++<<": ";
    if(res!=1){
        cout<<res<<endl;
    }
    else{
        path(0, 0);
    }

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
