#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1e9+7
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define S 1000002
int pre[S+7];
bool mark[S+7];
vector < int > v;
void  sieve(){
    memset(mark,0,sizeof(mark));
    for(int i=4; i<=S; i+=2)mark[i]=1;
    for(int i=3; i*i<=S; i+=2){
        if(mark[i]==0){
            for(int j=i*i; j<S; j+=(i*2))
                mark[j]=1;
        }
    }
    v.push_back(2);
    for(int i=3; i<=S; i+=2){
        if(mark[i]==0)
            v.push_back(i);
    }
}

void cal(){
    for(int i=2; i<S; i++){
        if(mark[i]==0 && i+2<S && mark[i+2]==0)pre[i+2]=1;
    }
    for(int i=1; i<S; i++){
        pre[i]+=pre[i-1];
    }
}

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;
    sieve();
    cal();
    cin>>t;
    while(t--){
        cin>>n;
        cout<<pre[n]<<endl;
    }






    return 0;
}

