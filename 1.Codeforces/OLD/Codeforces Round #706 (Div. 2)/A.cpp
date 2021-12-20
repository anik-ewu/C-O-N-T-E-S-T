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
const int               sz =1e1+5;

void solve(){

    string s;
    int a,b, n,m,k, i,j;
    cin>>n>>k;
    cin>>s;
    i=0;
    if(k*2+1>n){
        cout<<"No"<<endl;
        return ;
    }
    while(k--){
        if(s[i]!=s[n-i-1]){
            cout<<"No"<<endl;
            return ;
        }
       i++;
    }
    cout<<"Yes"<<endl;

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

