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
ll dp[35][1023];
vector< int > pre, v;
int code, len,cs=1;
const int MOD = 1013;

ll f(int i, int val){
    if(i==len){
        return val==code;
    }
    if(dp[i][val]!=-1)return dp[i][val];

    ll a=0;
    if(pre[i]){

        ll po=powl(31,3);
        what_is(po);
        cout<<(31*31)<<endl;
        int c=(val*po+pre[i])%MOD;
        a=f(i+1, c);
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
    if(i==len){
        return ;
    }
    for(int j='a'; j<='z'; j++){
        int c=(val * 31 +j) % MOD;
        if(f(i+1,c)){
            cout<<char(j);
            path(i+1,c);
            break;
        }
    }
}

void solve(){

    cin>>code>>s;
    int n=s.size();
    int val=0;
    pre.clear();
    v.clear();
    int cnt=0;
    for(int i=0; i<n; i++){
        if(s[i]!='?'){
            val=(val * 31 + s[i]) % MOD;
            cnt++;
        }
        else {
            pre.push_back(val);
            if(val)pre.push_back(0), v.push_back(cnt);
            val=0;
            cnt=0;
        }
    }
    if(s[n-1]!='?'){
        pre.push_back(val);
        v.push_back(cnt);
    }
    len=pre.size();
    for(int i=0; i<pre.size(); i++)cout<<pre[i]<<' ';
        cout<<endl;

    memset(dp, -1, sizeof(dp));
    ll res=f(0,0);
    cout<<"Case #"<<cs++<<": ";
    cout<<res<<endl;
    if(res!=1){
        cout<<res<<endl;
    }
    else{
        path(0, val);
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

