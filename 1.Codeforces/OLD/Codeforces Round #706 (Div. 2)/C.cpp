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

double f(double a, double b, double c, double d){
    return sqrt(((a-c)*(a-c))+(b-d)*((b-d)));
}

void solve(){

    int a,b,c, n,m, i,j;
    priority_queue< pair< int , pair< int , int > > > diamond;
    priority_queue< pair< int , pair< int , int > > > miner;
    cin>>n;
    for(i=1; i<=n*2; i++){
        cin>>a>>b;
        if(a){
            c=abs(a);
            diamond.push({-c,{a, b}});
        }
        else{
            c=abs(b);
            miner.push({-c,{a, b}});
        }
    }

    double res=0;
    while(!miner.empty()){
        double aa=miner.top().second.first;
        double bb=miner.top().second.second;
        double cc=diamond.top().second.first;
        double dd=diamond.top().second.second;
        res+=f(aa, bb, cc, dd);
        miner.pop();diamond.pop();
    }
    cout<<setprecision(9)<<fixed<<res<<endl;


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

