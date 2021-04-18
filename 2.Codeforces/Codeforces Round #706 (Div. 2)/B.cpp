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

map< int , int > mp;

void solve(){

    int a,b, n,m,k, i,j;
    mp.clear();
    cin>>n>>k;
    int mx=0;
    int cnt=0;
    for(i=1; i<=n; i++){
        cin>>a;
        if(mp[a]==0){
            cnt++;
        }
        mp[a]=1;
        mx=max(mx, a);
    }
    int mex=0;
    for(int i=0; i<=n+1; i++){
        if(mp.find(i)==mp.end()){
            mex=i;
            break;
        }
    }

    double x, y;
    while(k){
        if(mex>mx){
            cnt+=k;
            break;
        }
        x=mex;
        y=mx;
        a=round((x+y)/2.0);
        if(mp.find(a)!=mp.end()){
            break;
        }
        else if(a!=mex){
            cnt++;
            break;
        }
        else {
            while(mp.find(mex)!=mp.end())mex++;
        }
        k--;
    }
    cout<<cnt<<endl;

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

