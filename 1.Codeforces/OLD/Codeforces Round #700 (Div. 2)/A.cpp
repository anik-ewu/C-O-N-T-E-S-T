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

    string s;
    int a,b, n,m, i,j;

    cin>>s;
    for(i=0; i<s.size(); i++){
        if(i%2==0){
            if(s[i]=='a')s[i]='b';
            else s[i]='a';
        }
        else{
            if(s[i]=='z')s[i]='y';
            else s[i]='z';
        }
    }
    cout<<s<<endl;

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
