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


int  cs=1;
vector< string > v, vs;

bool check(string s, int n){

   int x=0; 
   for(int i=0; i<n; i++){
        if(s==v[i])x++;
   }
   if(x)return true;

   int res=0;  

   for(int i=0; i<n; i++){
    if(s.size()!=v[i].size())continue;
        int cnt=0;
        for(int j=0; j<s.size(); j++){
            if(v[i][j]!=s[j]){
                cnt++;
            }
        }
        if(cnt==1){
           res++;
        }
   }
   return res==1;

}

void solve(){

    int a,b, n,m, i,j;
    
    string s;
    v.clear();
    cin>>n>>m;
    for(i=1; i<=n; i++){
        cin>>s;
        v.push_back(s);
    }
    
    cout<<"Case #"<<cs++<<":"<<endl;
    for(i=1; i<=m; i++){
        cin>>s;
        if(check(s, n)){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
}

int main(){
    Fast;///using Fast I/O
    
    //read(x); write(x);

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

