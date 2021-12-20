#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll                inf = 1e9;
const int               mod=1e9+7;

#define all(x)          (x).begin(), (x).end()
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define N 1000002
bool mark[N+7];
vector < int > v;
void  sieve(){
    memset(mark,0,sizeof(mark));
    for(int i=4; i<=N; i+=2)mark[i]=1;
    for(int i=3; i*i<=N; i+=2){
        if(mark[i]==0){
            for(int j=i*i; j<N; j+=(i*2))
                mark[j]=1;
        }
    }
}


int main(){

    sieve();
    Fast;
    int n;
    cin>>n;
    vector< int > res;
    res.push_back(1);
    if(mark[n]==0){
        for(int i=2; i<=n-2; i++)res.push_back(i);
    }
    else{
        queue< int > q;
        for(int i=2; i<n; i++){
            int x=__gcd(i,n);
            if(x==1){
                q.push(i);
            }
        }
        ll x, mul=1;
        while(q.size()>1){
            res.push_back(q.front());
            x=q.front();
            mul=(mul*1LL*x)%n;
            q.pop();
        }
        x=q.front();
        mul=(mul*1LL*x)%n;
        if(mul==1){
            res.push_back(x);
        }
    }


    cout<<res.size()<<endl;
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<' ';
    }
    cout<<endl;




    return 0;
}
