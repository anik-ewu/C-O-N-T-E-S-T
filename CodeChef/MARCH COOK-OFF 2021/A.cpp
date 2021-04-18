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
const int               sz =1e6+5;

bool mark[sz+7];
vector < int > v;
vector < int > pre;

void  sieve(){
    memset(mark,0,sizeof(mark));
    for(int i=4; i<=sz; i+=2)mark[i]=1;
    for(int i=3; i*i<=sz; i+=2){
        if(mark[i]==0){
            for(int j=i*i; j<sz; j+=(i*2))
                mark[j]=1;
        }
    }
    v.push_back(2);
    for(int i=3; i<=sz; i+=2){
        if(mark[i]==0)
            v.push_back(i);
    }
}

void divisor(int n){
    int i,val,con,sum;
    int m=n;
    sum=1;
    for(i=0; v[i]*v[i]<=n; i++){
        if(n%v[i]==0){
            con=0;
            while(n%v[i]==0){
                con++;
                n/=v[i];
            }
            sum*=(con+1);
        }
    }
    if(n>1){
        sum*=2;
    }
    if(sum%2)pre.push_back(m);

}

void solve(){

    int a,b, n,m, i,j;
    for(i=0; i<pre.size(); i++){
        cout<<pre[i]<<endl;
        fflush(stdout);
        cin>>n;
        if(n==1){
            return;
        }
    }

}

int main(){
    
    Fast;   
    read(x); write(x);
    sieve();
    for(int i=1; i<=1000000; i++){
        divisor(i);
    }
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

