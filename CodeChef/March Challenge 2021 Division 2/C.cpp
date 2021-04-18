#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll                inf = 1e18;

#define all(x)          (x).begin(), (x).end()
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int               mod=1e9+7;
const int               sz =1e1+5;

void solve(){

    ll a,b,c,e,h, n,m, i,j;

    cin>>n;
    cin>>e>>h;
    cin>>a>>b>>c;

    ll res=inf, temp;
    if(e>=n*2){
        temp=n*a;
        res=min(res, temp);
    }
    if(h>=n*3){
        temp=n*b;
        res=min(res, temp);
    }
    if(e>=n and h>=n){
        temp=n*c;
        res=min(res, temp);
    }

    for(i=0; i<=n; i++){
        ll x=i; 
        ll y=n-i;

        if(e>=i*2 and (h>=y*3 || (h>=y and (e-(i*2))>=y))){
            ll temp=i*a;
            ll tt=inf;
            ll tc=inf;
            if(h>=y*3){
                tt=y*b;
            }
            if(h>=y and (e-(i*2))>=y){
                tc=y*c;
            }

            temp+=min(tt,tc);
            res=min(res, temp);


        }


    }

    if(res==inf){
        cout<<-1<<endl;
    }
    else{
        cout<<res<<endl;
    }


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

