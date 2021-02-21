#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define mod             1e9+7
#define sz              3000005

map< char , int > mpp;

void solve(){

    ll res=0;
    string s;
    cin>>s;

    int len=s.size();
    //mpp[s[len-1]]++;
    //mpp[s[len-2]]++;

    for(int i=len-1; i>=0; i--){
        mpp[s[i]]++;
        if(i<=len-3 && s[i]==s[i+1] && s[i]!=s[i+2]){
            
            int c=(len-i-mpp[s[i]]);
            res+=c;
            mpp.clear();
            mpp[s[i]]=len-1;
        }
    }

    cout<<res<<endl;
}

int main(){
    Fast;///using Fast I/O
    
    read(x); write(x);

    int multitest=0;
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

